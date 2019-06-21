#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {

    
    float sum = 0;
    int i = 0;
    double n = 1;
    int j = 1;
    float x;
    double tmp = 1;
    int k;
    int pm;
    float th;
    
    cin >> x;
    th = sin(2 * 3.14159 * (x / 360));
    

    if(x < 0){
        pm = -1;
        x = fabs(x);
        cout << x << endl;
    }
    else{
        pm = 1;
    }
    if(x > 360){
        k = int(x / 360);
        x -= 360 * (k + 1);
    }
    
    
    x = 2 * 3.14159 * (x / 360);
    cout << x << endl;
    
    while(fabs(tmp) > pow(10, -6)){
        
        n = 1;
        
        for(j = 1; j <= (2 * i + 1); j++){   /* n = j! */
            n *= j;
        }
        tmp = pow(-1, i) * (pow(x, 2 * i + 1) / n);
        
        sum += tmp;
        i++;
        cout << pow(-1, i) * (pow(x, 2 * i + 1)) << " / " << n << endl;
    }
    
    sum *= pm;

    
    cout << "Cal: " << sum << endl;
    cout << "math: " << th << endl;
    
  
	system("pause");
	return 0;

}