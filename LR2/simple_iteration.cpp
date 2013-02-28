#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#include "data.hpp"

using namespace std;

void iterate(double a, double b, double M, double m) {
	double Alpha = 2/(M+m);
	double q = (M-m)/(M+m);
	double Eps1 = ((1-q)/q)*Eps;

	std::cout << "Alpha = " << Alpha << std::endl;
	std::cout << "q = " << q << std::endl << std::endl;
	std::cout.setf( std::ios::scientific );
	std::cout << "Eps1 = " << Eps1 << std::endl << std::endl;

	double x = (a+b)/2;
	double x_ = 0;
	int n = 0;

	std::cout << "n" << "\t" << "x(n)" << "\t\t" << "|x(n)-x(n-1)|" << std::endl;

	do {
		if(n>0) {x_ = x;
		x = x_ - Alpha*f(x_);}

		std::cout.setf( std::ios::fixed, std::ios::floatfield );
		std::cout << n << "\t" << x << "\t";

		std::cout.setf( std::ios::scientific, std::ios::floatfield );
		std::cout << fabs(x-x_) << std::endl;

		n++;
	} while(fabs(x-x_) >= fabs(Eps1));
}

int main(int argc, char **argv) {
	const double a = min(atof(argv[1]), atof(argv[2]));
	const double b = max(atof(argv[1]), atof(argv[2]));
	const double M = max(atof(argv[3]), atof(argv[4]));
	const double m = min(atof(argv[3]), atof(argv[4]));

	std::cout.precision(9);
	std::cout.setf( std::ios::fixed, std::ios::floatfield);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "M = " << M << std::endl;
	std::cout << "m = " << m << std::endl << std::endl;

	iterate(a, b, M, m);

	return 0;
}
