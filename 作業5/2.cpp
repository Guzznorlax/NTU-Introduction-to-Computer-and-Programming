#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


int main() {

    
    float sum = 0;
    int i = 1;

    while(i <= 20){
        
        sum += (1.0 / (i * i));
        i++;
        
    }
    
    cout << sum << endl;
 
	system("pause");
	return 0;

}