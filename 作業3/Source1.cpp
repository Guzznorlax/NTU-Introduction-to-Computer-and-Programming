#include <iostream>
#include <process.h>
#include <iomanip>
#include <string>

using namespace std;

struct student{
    string name;
    string id;
    int age;
    int grade;
    
};


int main() {

    string name1;
    string id1;
    int age1;
    int grade1;
    string name2;
    string id2;
    int age2;
    int grade2;
        
    student a{
    };
    student b{
        
    };
    cin >> name1 >> id1 >> age1 >> grade1 ;

    a.name = name1;
    a.id = id1;
    a.age = age1;
    a.grade = grade1;
    
    cin >> name2 >> id2 >> age2 >> grade2 ;

    b.name = name2;
    b.id = id2;
    b.age = age2;
    b.grade = grade2;    

    cout << a.name << endl << a.id << endl << a.age << endl << a.grade << endl << endl;
    cout << b.name << endl << b.id << endl << b.age << endl << b.grade << endl << endl;
   
	system("pause");
	return 0;





}