#include <iostream>

using namespace std;

class Vec2D{
protected:
  double x, y;

public:
  Vec2D();
  Vec2D(double, double);
  Vec2D(const Vec2D&);
  Vec2D operator+(const Vec2D&);
  Vec2D operator-(const Vec2D&);
  // double operator*(const Vec2D&);
  Vec2D& operator=(const Vec2D&);
  // Vec2D& operator+=(const Vec2D&);
  // Vec2D& operator-=(const Vec2D&);
  // void read();
  // void print();
  friend ostream& operator<<(ostream&, const Vec2D&);
  friend istream& operator>>(istream&, Vec2D&);

};

class Vec3D: public Vec2D{
protected:
    double z;

public:
    Vec3D();
    Vec3D(double, double, double);
    Vec3D(const Vec3D&);
    Vec3D operator+(const Vec3D&);
    Vec3D operator-(const Vec3D&);
    Vec3D& operator=(const Vec3D&);

    friend ostream& operator<<(ostream&, const Vec3D&);
    friend istream& operator>>(istream&, Vec3D&);



};

int main() {
    Vec3D v1, v2, v3, v4;

    cin >> v1;
    cin >> v2;

    v3 = v1 + v2;
    v4 = v1 - v2;

    cout << v1 << "\n" << v2 << "\n" << v3 << "\n" << v4 << "\n";1

	return 0;
}

Vec2D::Vec2D(){
  x = 0;
  y = 0;
}

Vec3D::Vec3D(){
  x = 0;
  y = 0;
  z = 0;
}

Vec2D::Vec2D(const Vec2D& v2){
    x = v2.x;
    y = v2.y;
}

Vec3D::Vec3D(const Vec3D& v2){
    x = v2.x;
    y = v2.y;
    z = v2.z;
}

Vec2D::Vec2D(double a, double b){
  x = a;
  y = b;
}

Vec3D::Vec3D(double a, double b, double c){
  x = a;
  y = b;
  z = c;
}

Vec2D Vec2D::operator+(const Vec2D & v2){
  Vec2D v3 = Vec2D();
  v3.x = x + v2.x;
  v3.y = y + v2.y;

  return v3;
}

Vec3D Vec3D::operator+(const Vec3D & v2){
  Vec3D v3 = Vec3D();
  v3.x = x + v2.x;
  v3.y = y + v2.y;
  v3.z = z + v2.z;

  return v3;
}

Vec2D Vec2D::operator-(const Vec2D& v2){
  Vec2D v3 = Vec2D();
  v3.x = x - v2.x;
  v3.y = y - v2.y;

  return v3;
}

Vec3D Vec3D::operator-(const Vec3D & v2){
  Vec3D v3 = Vec3D();
  v3.x = x - v2.x;
  v3.y = y - v2.y;
  v3.z = z - v2.z;

  return v3;
}

/* double Vec2D::operator*(const Vec2D& v2){
  return x * v2.x + y * v2.y + z * v2.z;
} */

Vec2D& Vec2D::operator=(const Vec2D& v2){
    x = v2.x;
    y = v2.y;

    return (*this);
}

Vec3D& Vec3D::operator=(const Vec3D& v2){
    x = v2.x;
    y = v2.y;
    z = v2.z;

    return (*this);
}

/* Vec2D& Vec2D::operator+=(const Vec2D& v2){
    x += v2.x;
    y += v2.y;
    z += v2.z;

    return (*this);
}

Vec2D& Vec2D::operator-=(const Vec2D& v2){
    x -= v2.x;
    y -= v2.y;
    z -= v2.z;

    return (*this);
} */

/* void Vec2D::read(){
  cout << "Input x:"; cin >> x; cout << endl;
  cout << "Input y:"; cin >> y; cout << endl;
  cout << "Input z:"; cin >> z; cout << endl;

}

void Vec2D::print(){
  cout << "(" << x << ", " << y << ", " << z << ")" << endl;
} */

ostream& operator<<(ostream &out,const Vec2D &v){
  cout << "(";
  out << v.x;
  cout << ", ";
  out << v.y;
  cout << ")\n";

  return out;
}

istream& operator>>(istream &in, Vec2D &v){
  cout << "Input x: ";
  in >> v.x;
  cout << "Input y: ";
  in >> v.y;

  return in;
}

ostream& operator<<(ostream &out,const Vec3D &v){
  cout << "(";
  out << v.x;
  cout << ", ";
  out << v.y;
  cout << ", ";
  out << v.z;
  cout << ")\n";

  return out;
}

istream& operator>>(istream &in, Vec3D &v){
  cout << "Input x: ";
  in >> v.x;
  cout << "Input y: ";
  in >> v.y;
  cout << "Input z: ";
  in >> v.z;

  return in;
}