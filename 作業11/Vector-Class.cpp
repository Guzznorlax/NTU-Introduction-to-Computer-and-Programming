#include <iostream>

using namespace std;

class Vector{
private:
  double x, y, z;

public:
  Vector();
  Vector(double, double, double);
  Vector(const Vector&);
  Vector operator+(const Vector&);
  Vector operator-(const Vector&);
  double operator*(const Vector&);
  Vector& operator=(const Vector&);
  Vector& operator+=(const Vector&);
  Vector& operator-=(const Vector&);
  void read();
  void print();

};

int main() {

  Vector a, b = Vector(3.4, 2.6, 1.3), c, d, e;
  double m;

  a.read();

  e = a;

  c = a + b;

  d = a - b;

  a += b;

  e -= b;

  m = d * e;

  a.print();
  b.print();
  c.print();
  d.print();
  e.print();
  cout << "m = " << m << endl;



	system("pause");
	return 0;

}

Vector::Vector(){
  x = 0;
  y = 0;
  z = 0;
}

Vector::Vector(const Vector& v2){
    x = v2.x;
    y = v2.y;
    z = v2.z;
}

Vector::Vector(double a, double b, double c){
  x = a;
  y = b;
  z = c;
}

Vector Vector::operator+(const Vector & v2){
  Vector v3 = Vector();
  v3.x = x + v2.x;
  v3.y = y + v2.y;
  v3.z = z + v2.z;

  return v3;
}

Vector Vector::operator-(const Vector& v2){
  Vector v3 = Vector();
  v3.x = x - v2.x;
  v3.y = y - v2.y;
  v3.z = z - v2.z;

  return v3;
}

double Vector::operator*(const Vector& v2){
  return x * v2.x + y * v2.y + z * v2.z;
}

Vector& Vector::operator=(const Vector& v2){
    x = v2.x;
    y = v2.y;
    z = v2.z;

    return (*this);
}

Vector& Vector::operator+=(const Vector& v2){
    x += v2.x;
    y += v2.y;
    z += v2.z;

    return (*this);
}

Vector& Vector::operator-=(const Vector& v2){
    x -= v2.x;
    y -= v2.y;
    z -= v2.z;

    return (*this);
}

void Vector::read(){
  cout << "Input x:"; cin >> x; cout << endl;
  cout << "Input y:"; cin >> y; cout << endl;
  cout << "Input z:"; cin >> z; cout << endl;

}

void Vector::print(){
  cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
