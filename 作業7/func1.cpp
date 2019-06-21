#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


float umax(float n1, float n2, float n3){
    
    float imax;
    
    imax = n1;
    
    if(imax < n2){
        imax = n2;
    }
    
    if(imax < n3){
        imax = n3;
    }
    
    return imax;
    
}


int main() {

    float n1, n2, n3;
    
    cin >> n1 >> n2 >> n3;
    
    cout << umax(n1, n2, n3) << endl;
  
	system("pause");
	return 0;

}