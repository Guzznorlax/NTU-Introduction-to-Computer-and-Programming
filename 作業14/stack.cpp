#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class Ustack
{
private:
    int *stk;
    int next;

public:
    Ustack();
    ~Ustack();
    void clear();

    void push(int);
    int pop();
    int size();
};


int main() {
    Ustack istack = Ustack();

    for(int i = 0; i < 11; i++){
        int n = 0;
        cout << "Counter: " << i + 1 << " Input an int: ";
        cin >> n;
        istack.push(n);
    }

    for(int i = 0; i < 10; i++){
        cout << "istack[" << i << "]: " << istack.pop() << "\n";

    }



    return 0;
}

Ustack::Ustack(){
    stk = new int[10];
    next = 0;
}

Ustack::~Ustack(){
    delete stk;
}

void Ustack::clear(){
    for(int i = 0; i < 10; i++){
        stk[i] = 0;
    }
    next = 0;
}

void Ustack::push(int num){
    if(next < 10){
        stk[next] = num;
        next += 1;
    }
    else{
        cout << "No space!\n";
    }
}

int Ustack::pop(){
    int num;
    if(next != 0){
        num = stk[next - 1];
        stk[next - 1] = 0;
        next -= 1;
    }
    else{
        num = 0;
        cout << "Ustack is empty!\n";
    }
    
    return num;
}
int Ustack::size(){
    return 10 - next;
}