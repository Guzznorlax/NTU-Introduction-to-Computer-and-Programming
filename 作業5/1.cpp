#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


int main() {

    
    float sum = 0;

    for(int i = 1; i <= 20; i++){
        
        sum += (1.0 / (i * i));
        
    }
    
    cout << sum << endl;
 
	system("pause");
	return 0;

}