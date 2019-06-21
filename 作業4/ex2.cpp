#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


int main() {

    float a, b, c, max, min;
    
    cin >> a >> b >> c;
    
    if(a > b){
        if(a > c){
            max = a;
            if(b > c){
                min = c;
            }
            else{
                min = b;
            }
        }
    }
    if(c > b){
        if(c > a){
            max = c;
            if(b > a){
                min = a;
            }
            else{
                min = b;
            }
        }
    }
    
    if(b > a){
        if(b > c){
            max = b;
            if(c > a){
                min = a;
            }
            else{
                min = c;
            }
        }
    }
    
    
    cout << "max: " << max << endl << "min: " << min << endl;

	system("pause");
	return 0;





}