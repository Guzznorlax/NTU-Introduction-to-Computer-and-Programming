#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {

    
    float sum = 0;
    int i = 0;
    int n = 1;
    int j = 1;

    while((1.0 / n) > pow(10, -6)){
        
        j = 1;
        n = 1;
        
        while(j <= i){
            n *= j;
            j++;
        }
        
        sum += (1.0 / n);
        i++;
        cout << sum << endl;
    }
    
    cout << sum << endl;
 
	system("pause");
	return 0;

}