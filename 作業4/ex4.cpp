#include <iostream>
#include <process.h>
#include <iomanip>
#include <string>

using namespace std;


int main() {

    string grade;
    int p1, p2, avg;
    float gpa;
    
    cin >> grade;
    
    if(grade == "A+"){
        p1 = 90;
        p2 = 100;
        avg = 95;
        gpa = 4.3;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "A"){
        p1 = 85;
        p2 = 89;
        avg = 87;
        gpa = 4.0;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }    
    if(grade == "A-"){
        p1 = 80;
        p2 = 84;
        avg = 82;
        gpa = 3.7;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "B+"){
        p1 = 77;
        p2 = 79;
        avg = 78;
        gpa = 3.3;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "B"){
        p1 = 73;
        p2 = 76;
        avg = 75;
        gpa = 3;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "B-"){
        p1 = 70;
        p2 = 72;
        avg = 70;
        gpa = 2.7;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "C+"){
        p1 = 67;
        p2 = 69;
        avg = 68;
        gpa = 2.3;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    } 
    if(grade == "C"){
        p1 = 63;
        p2 = 66;
        avg = 65;
        gpa = 2;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "C-"){
        p1 = 60;
        p2 = 62;
        avg = 60;
        gpa = 1.7;
        cout << "Percentage: " << p1 << " - " << p2 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    
    if(grade == "F"){
        p1 = 59;

        avg = 50;
        gpa = 0;
        cout << "Percentage: " << " <= " << p1 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
    if(grade == "X"){
        p1 = 0;

        avg = 0;
        gpa = 0;
        cout << "Percentage: " << p1 << endl << "Average: " << avg << endl << "GPA: " << gpa << endl;
    }
 
 
 
	system("pause");
	return 0;





}