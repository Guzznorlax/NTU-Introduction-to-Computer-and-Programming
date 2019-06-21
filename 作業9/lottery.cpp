#include <iostream>
#include <process.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
	int n_min = 1;
	int n_max = 46;
	int a;
	int a_n = 7;

	srand(time(NULL));

	for (int i = 0; i < a_n; i++) {
		
		a = (rand() % (n_max - n_min + 1)) + n_min;

		cout << "The random number is: " << a << endl;
	}


	system("pause");
	return 0;

}