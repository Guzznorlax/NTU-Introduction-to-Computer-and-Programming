#include <iostream>

using namespace std;

class Complex {
public:
	Complex add(const Complex&);
	Complex sub(const Complex&);
	void input();
	void output();

private:
	float real, imag;

};
