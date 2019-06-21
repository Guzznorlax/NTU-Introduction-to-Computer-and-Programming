#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


int main() {

    float a, b, c, max, min;
    
    cin >> a >> b >> c;
    
    if(a > b&&a > c){
        max = a;
    }
    if(b > a&&b > c){
        max = b;
        }
    }
    if(c > a&&c > b){
        max = c;
        }
    }
    if(a < b&&a < c){
        min = a;
    }
    if(b < a&&b < c){
        min = b;
        }
    }
    if(c < a&&c < b){
        min = c;
        }
    }    
    cout << "max: " << max << endl << "min: " << min << endl;

	system("pause");
	return 0;





}