#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


int main() {
    
    int *a;
    float term = 1;
    float sum = 0;
    float x = 0;
    int n = 0;
    
    
    cout << "Input n: "; cin >> n;
    
    n += 1;
    
    a = new int [n + 1];
    
    cout << "Input x: "; cin >> x;
    
    for(int i = 0; i < n; i++){
        cin >> *(a + i);
    }
    
    for(int i = 0; i < n; i++){
        
        sum += term * (*(a + i));
        term *= x;
    }
    
    cout << "Sum: " << sum << endl;
    
    

	system("pause");
	return 0;

}