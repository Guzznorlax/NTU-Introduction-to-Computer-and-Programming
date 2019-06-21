#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;

int main() {
	
	float r;
	float a;
	float pi;
	float v;

	cin >> r;
	
	pi = 3.1415927;
	a = 4 * pi * r * r;
	v = 4.0 / 3.0 * pi * r * r * r;
	cout << fixed << "radius = " << r << ", area = " << a << ", volume = " << v;

	system("pause");
	return 0;





}