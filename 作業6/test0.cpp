#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {

    
    double sum = 1.0;
    double term = 1.0;
    float x;
    
    cin >> x;
    
    for(int i = 1; fabs(term) >= pow(10.0, -6); i++){
        
        term *= (x / i);
        sum += term;
        
        //cout << term << endl;
    }

    cout << "cal: " << sum << endl;
    cout << "th: " << exp(x) << endl;
 
	system("pause");
	return 0;

}