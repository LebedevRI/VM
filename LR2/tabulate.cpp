#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#include "data.hpp"

using namespace std;

void tabulate (double a, double b, double step);

void tabulate (double a, double b, double step) {
	std::cout << "x" << "\t\t" << "Pm(x)" << "\t\t" << "Pm'(x)" << std::endl;
	for(double x = a; x<b; x+=step) {
		std::cout << x << "\t" << f(x) << "\t" << df(x) << std::endl;

	}
}

int main(int argc, char **argv) {
	const double a = min(atof(argv[1]), atof(argv[2]));
	const double b = max(atof(argv[1]), atof(argv[2]));
	const double step = atof(argv[3]);

	std::cout.precision(-(int)log10(Eps));
	std::cout.setf( std::ios::fixed, std::ios::floatfield);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "step = " << step << std::endl << std::endl;

	tabulate(a, b, step);

	return 0;
}
