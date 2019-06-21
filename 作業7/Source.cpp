#include <iostream>
#include <process.h>
#include <iomanip>

using namespace std;

void umax(float, float, float);

float gmax;

int main() {

	float n1, n2, n3;
	extern float gmax;

	cin >> n1 >> n2 >> n3;

	umax(n1, n2, n3);

	cout << gmax << endl;

	system("pause");
	return 0;

}