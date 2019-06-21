#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;


int main() {
    float cm;
    float inch;
    int foot;
    
    cin >> cm ;
    
    foot = cm / 30.48;
    inch = (cm - foot * 30.48) / 2.54;
    
    cout << cm << " cm = "<< foot << " feet and " << setprecision(4) << inch << " inches." << endl;



	system("pause");
	return 0;





}