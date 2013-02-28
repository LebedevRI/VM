#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#include "data.hpp"

using namespace std;

void tabulate (float a, float b, float step) {
	std::cout << "x" << "\t\t" << "Pm(x)" << "\t\t" << "Pm'(x)" << std::endl;
	for(float x = a; x<b; x+=step) {
		printf("%f\t%f\t%f\n", x, f(x), df(x));
	}
}

int main(int argc, char **argv) {
	const float a = min(atof(argv[1]), atof(argv[2]));
	const float b = max(atof(argv[1]), atof(argv[2]));
	const float step = atof(argv[3]);

	std::cout.precision(-log10(Eps));
	std::cout.setf( std::ios::fixed );
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "step = " << step << std::endl << std::endl;

	tabulate(a, b, step);

	return 0;
}
