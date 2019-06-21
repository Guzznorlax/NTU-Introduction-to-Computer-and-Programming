#include <iostream>
//#include <process.h>
#include <iomanip>

using namespace std;


int main() {
    
    float a[10];
    float x = 1.2;
    float term = 1;
    float sum = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }


    for(int i = 0; i < 10; i++){
        
        sum += term * a[i];
        term *= x;
    }
    
    cout << "Sum: " << sum << endl;

	//system("pause");
	return 0;

}