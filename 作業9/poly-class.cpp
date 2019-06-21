#include "Poly.h"
#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;

void Poly::init() {

	cout << "Input n: "; cin >> n;
	n += 1;

	a = new float[n + 1];

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ":";
		cin >> *(a + i);
	}

}

float Poly::value(float x) {

	float term = 1;
	float sum = 0;

	for (int i = 0; i < n; i++) {

		sum += term * (*(a + i));
		term *= x;
	}
	return sum;
}

void Poly::output() {

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << a[i] << " + ";
		}
		else if (i == n - 1) {
			cout << a[i] << "*x^" << i;
		}
		else {
			cout << a[i] << "*x^" << i << " + ";
		}
		
	}

}

int main() {
	float x = 1.2;
	Poly f1;

	f1.init();

	f1.output();

	cout << endl << "Ans: " << f1.value(x) << endl;

	system("pause");
	return 0;
}