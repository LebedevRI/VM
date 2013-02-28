#include <cmath>

inline double f(double x) {
	return(pow(x,5)-5.3*pow(x,4)+9.8*pow(x,3)-10*pow(x,2)+8.8*x-4.2);
}

inline double df(double x) {
	return(5*pow(x,4)-5.3*4*pow(x,3)+9.8*3*pow(x,2)-10*2*x+8.8);
}

const double Eps = 1E-8;
