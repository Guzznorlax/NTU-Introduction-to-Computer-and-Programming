#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;

struct complex {
	float real, imag;
};

complex add(complex, complex);
complex sub(complex, complex);
void input(complex&);
void output(const complex&);


int main() {

	complex c1;
	complex c2;

	input(c1);
	input(c2);

	output(add(c1, c2));
	output(sub(c1, c2));



	system("pause");
	return 0;

}

complex add(complex c1, complex c2) {

	complex c3;

	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;

	return c3;
}

complex sub(complex c1, complex c2) {

	complex c3;

	c3.real = c1.real - c2.real;
	c3.imag = c1.imag - c2.imag;

	return c3;
}

void output(const complex& c) {

	if (c.imag >= 0) {
		cout << c.real << " + " << c.imag << "i" << endl;
	}
	else {
		cout << c.real << " - " << -c.imag << "i" << endl;
	}

}
void input(complex& c) {

	cout << "Input c's real part: ";
	cin >> c.real;
	cout << "Input c's imaginary part: ";
	cin >> c.imag;

}