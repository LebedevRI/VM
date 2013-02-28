#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

inline float f(float x) {
	return(pow(x,5)-5.3*pow(x,4)+9.8*pow(x,3)-10*pow(x,2)+8.8*x-4.2);
}

inline float df(float x) {
	return(5*pow(x,4)-5.3*4*pow(x,3)+9.8*3*pow(x,2)-10*2*x+8.8);
}

void tabulate (float a, float b, float step) {
	printf("x\t\tPm(x)\t\tP'm(x)\n");
	for(float x = a; x<=b; x+=step) {
		printf("%f\t%f\t%f\n", x, f(x), df(x));
	}
}

int main(int argc, char **argv) {
	std::cout << "a = " << argv[1] << std::endl;
	std::cout << "b = " << argv[2] << std::endl;
	std::cout << "step = " << argv[3] << std::endl << std::endl;

	tabulate(atof(argv[1]), atof(argv[2]), atof(argv[3]));

	return 0;
}
