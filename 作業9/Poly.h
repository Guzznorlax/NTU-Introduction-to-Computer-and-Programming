#include <iostream>

using namespace std;

class Poly {
private:
	int n;
	float* a;

public:
	void init();
	float value(float);
	void output();

};