#include "Complex.h"
#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;

Complex Complex::add(const Complex& c2) {
	Complex sum;

	sum.real = real + c2.real;
	sum.imag = imag + c2.imag;

	return sum;
}

Complex Complex::sub(const Complex& c2) {
	Complex sum;

	sum.real = real - c2.real;
	sum.imag = imag - c2.imag;

	return sum;
}

void Complex::input() {
	
	cout << "Input the real part: "; cin >> real;
	cout << "Input the imaginary part: "; cin >> imag;

}
void Complex::output() {

	cout << real << " + " << imag << "i" << endl;

}

int main() {
	Complex c1, c2, c3;

	c1.input();
	c2.input();

	c3 = c1.add(c2);
	c3.output();

	c3 = c1.sub(c2);
	c3.output();




	system("pause");
	return 0;

}