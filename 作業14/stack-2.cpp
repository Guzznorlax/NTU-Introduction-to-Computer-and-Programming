#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class Ustack
{
private:
    int *stk;
    int next;
    int max;

public:
    Ustack();
    Ustack(int);
    ~Ustack();
    void clear();
    void push(int);
    int pop();
    int size();
    void resize();
    void print();
};


int main() {
    Ustack istack = Ustack(8);

    for(int i = 0; i < 11; i++){
        int n = 0;
        cout << "Counter: " << i + 1 << " Input an int: ";
        cin >> n;
        istack.push(n);
    }

    istack.print();

    for(int i = 0; i < 11; i++){
        cout << "istack pop " << i  << ": " << istack.pop() << "\n";

    }



    return 0;
}

Ustack::Ustack(){
    max = 8;
    stk = new int[max];
    next = 0;
}

Ustack::Ustack(int num){
    max = num;
    stk = new int[max];
    next = 0;
}

Ustack::~Ustack(){
    delete stk;
}

void Ustack::clear(){
    for(int i = 0; i < max; i++){
        stk[i] = 0;
    }
    next = 0;
}

void Ustack::push(int num){
    if(next < max){
        stk[next] = num;
        next += 1;
    }
    else{
        resize();
        stk[next] = num;
        next += 1;
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
    return max - next;
}

void Ustack::resize(){
    max *= 2;
    int *nstk = new int[max];

    for(int i = 0; i < max / 2; i++){
        nstk[i] = stk[i];
    }

    stk = nstk;
}

void Ustack::print(){
    for(int i = 0; i < max; i++){
        cout << "stk: " <<stk[i] << "\n";
    }

}