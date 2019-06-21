#define _USE_MATH_DEFINES

#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>


using namespace std;

int main() {

	double a = cos(13 * M_PI / 180);
	double b = exp(M_PI / 2);
	double c = log10(M_PI / 2);
	double d = sin(47 * M_PI / 180);
	double e = pow(2, 8.0 / 3);

	cout << fixed << setprecision(8) << a << endl << setprecision(8) << b << endl << setprecision(8) << c << endl << setprecision(8) << d << endl << setprecision(8) << e << endl;

	system("pause");


	return 0;



}