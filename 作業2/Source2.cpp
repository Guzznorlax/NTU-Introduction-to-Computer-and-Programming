#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;

int main() {

	double a = 3.1415927;
	int i = 2;
	char b = 'p';
	char c = 'i';

	cout << setprecision(4) << "The constant number " << i << b << c << " is " << 2 * a << endl;

	system("pause");


	return 0;



}