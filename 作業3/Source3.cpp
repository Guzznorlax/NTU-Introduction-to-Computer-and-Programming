#define _USE_MATH_DEFINES

#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>


using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    
    cin >> a >> b >> c >> d;
    
    e = a * d + c* b;
    f = b * d;
    
    cout << a << "/" << b << " + " << c << "/" << d << " = " << e << "/" << f << endl;

	system("pause");


	return 0;



}