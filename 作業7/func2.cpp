#include <iostream>
#include <process.h>
#include <iomanip>
#include <math.h>

using namespace std;

void umax(float n1, float n2, float n3, float *imax){
    
    *imax = n1;
    
    if(*imax < n2){
        *imax = n2;
    }
    
    if(*imax < n3){
        *imax = n3;
    }
}


int main() {

    float n1, n2, n3;
    float gmax;
    
    cin >> n1 >> n2 >> n3;
    
    umax(n1, n2, n3, &gmax);
    
    cout << gmax << endl;
  
	system("pause");
	return 0;

}