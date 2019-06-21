#define _USE_MATH_DEFINES

#include <iostream>
#include <process.h>
#include <iomanip>


using namespace std;

int main() {

    int a = 2;
    int b = 4;
    int c = --a-(b--);

    cout << "a = " << c << endl << "b = " << a << endl << "c = "<< b << endl;

	system("pause");


	return 0;



}