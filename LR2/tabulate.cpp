#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#include "data.hpp"

using namespace std;

void tabulate (float a, float b, float step) {
	std::cout << "x" << "\t\t" << "Pm(x)" << "\t\t" << "Pm'(x)" << std::endl;
	for(float x = a; x<=b; x+=step) {
		printf("%f\t%f\t%f\n", x, f(x), df(x));
	}
}

int main(int argc, char **argv) {
	float a = atof(argv[1]);
	float b = atof(argv[2]);
	float step = atof(argv[3]);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "step = " << step << std::endl << std::endl;

	tabulate(a, b, step);

	return 0;
}
