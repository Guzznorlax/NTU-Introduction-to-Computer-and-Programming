#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {

    float a, b, c, x1, x2, x1i, x2i;
    char i = 'i';
    
    cin >> a >> b >> c;
    
    if(a == 0){
        if(b == 0){
            if(c == 0){
                cout << "Many solution" << endl;
            }
            else{
                cout << "No solution" << endl;
            }
        }
        else{
            x1 = -c / b;
            cout << "x: " << x1 << endl;
        }
    }
    else{
        
        if((b * b - 4 * a * c) >= 0){
            x1 = (-b / (2 * a)) + (sqrt(b * b - 4 * a * c) / (2 * a));
            x2 = (-b / (2 * a)) - (sqrt(b * b - 4 * a * c) / (2 * a));
            cout << "x1: " << x1 << endl << "x2: " << x2 << endl;
        }
        if((b * b - 4 * a *c) < 0){
            x1 = (-b / (2 * a));
            x1i = (sqrt(4 * a * c - b * b) / (2 * a));
            x2 = (-b / (2 * a));
            x2i = (sqrt(4 * a * c - b * b) / (2 * a));
            cout << "x1: " << x1 << " + " << x1i << i << endl << "x2: " << x2 << " - " << x2i << i << endl;
        }
    }
    
	system("pause");
	return 0;





}