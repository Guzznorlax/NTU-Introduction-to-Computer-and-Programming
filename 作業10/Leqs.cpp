#include <iostream>
#include <iomanip>

using namespace std;

class Leqs{
private:
  double a, b, c, d, e, f;
  double x, y;
  int flag;

public:
  void read();
  void solve();
  void print();

};

int main() {
  Leqs eq;

  eq.read();
  eq.solve();
  eq.print();


	system("pause");
	return 0;

}

void Leqs::read(){
  cout << "Input a, b, c, d, e, f: " << endl; cin >> a >> b >> c >> d >> e >> f;
}

void Leqs::solve(){
  if ((a * e - b * d) == 0 && (a * f - c * d) == 0){
    flag = -1;
  }
  else if((a * e - b * d) == 0 && (a * f - c * d) != 0){
    flag = 0;
  }
  else{
    flag = 1;

    x = (e * c - b * f) / (a * e - b * d);
    y = (d * c - a * f) / (b * d - a * e);
  }
}

void Leqs::print(){
  if(flag == 1){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
  else if(flag == -1){
    cout << "Infinite sol" << endl;
  }
  else if(flag == 0){
    cout << "No sol" << endl;
  }
}
