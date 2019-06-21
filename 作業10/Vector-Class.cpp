#include <iostream>
#include <iomanip>

using namespace std;

class Vector{
private:
  double x, y, z;

public:
  Vector();
  Vector(double, double, double);
  Vector add(const Vector&);
  Vector sub(const Vector&);
  double dot(const Vector&);
  void read();
  void print();

};

int main() {

  Vector a = Vector(1.2, 2.4, 3.6), b, c, d;
  double m;

  b.read();

  c = a.add(b);

  d = a.sub(b);

  m = c.dot(d);

  a.print();
  b.print();
  c.print();
  d.print();
  cout << "m = " << m << endl;



	system("pause");
	return 0;

}

Vector::Vector(){
  x = 0;
  y = 0;
  z = 0;
}

Vector::Vector(double a, double b, double c){
  x = a;
  y = b;
  z = c;
}

Vector Vector::add(const Vector & v2){
  Vector v3 = Vector();
  v3.x = x + v2.x;
  v3.y = y + v2.y;
  v3.z = z + v2.z;

  return v3;
}

Vector Vector::sub(const Vector & v2){
  Vector v3 = Vector();
  v3.x = x - v2.x;
  v3.y = y - v2.y;
  v3.z = z - v2.z;

  return v3;
}

double Vector::dot(const Vector& v2){
  return x * v2.x + y * v2.y + z * v2.z;
}

void Vector::read(){
  cout << "Input x:"; cin >> x; cout << endl;
  cout << "Input y:"; cin >> y; cout << endl;
  cout << "Input z:"; cin >> z; cout << endl;

}

void Vector::print(){
  cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
