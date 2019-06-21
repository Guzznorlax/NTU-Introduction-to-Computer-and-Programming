#include<iostream>
#include<stdlib.h>
#include<process.h>
#include<cstring>

using namespace std;

class Account{
private:
    string name;
    int password;
    long balance;
    bool state;
    int id;
    bool check_password();

public:
    Account();
    Account(string,  int, int, long);
    long deposit();
    long withdraw();
    int changepassword();
    long query();

};


int main(){
    int n = 0;
    Account a;
    string u_name("ZZZ");

    cout << "Create account 1\n";
    cout << "Deposit 2\nWithdraw 3\nChange password 4\nCheck balance 5\n";
    cout << "Quit 9\n";

    while(true){

        cout <<"Input n: "; cin >> n;

        switch (n) {
            case 0:
                a = Account();
                break;
            case 1:
                a = Account(u_name, 0000, 1234, 10000);
                break;
            case 2:
                cout << a.deposit() << "\n";
                break;
            case 3:
                cout << a.withdraw() << "\n";
                break;
            case 4:
                cout << a.changepassword() << "\n";
                break;
            case 5:
                cout << a.query() << "\n";
                break;
            case 9:
                exit(0);
        }

}
    system("pause");
    return 0;
}

Account::Account(){
    name = "admin";
    password = 1234;
    id = 1095;
    balance = 0;
    state = true;
}

Account::Account(string my_name, int my_password, int my_id, long my_balance){
    name = my_name;
    password = my_password;
    id = my_id;
    balance = my_balance;
    state = true;
}

long Account::deposit(){
    if(state){
        if(check_password()){
            long n;
            cout << "Input deposit amount: "; cin >> n;

            if(n <= 0){
                n = 0;
            }

            balance += n;
        }
    }
    else{
        cout << "Account locked!\n";
    }
    return balance;
}

long Account::withdraw(){
    if(state){
        if(check_password()){
            long n;
            cout << "Input withdraw amount: "; cin >> n;

            if(n > balance){
                cout << "balance < withdraw amount!\n";
            }
            else{
                balance -= n;
            }
        }
    }
    else{
        cout << "Account locked!\n";
    }
    return balance;
}

long Account::query(){
    long n = 0;
    if(state){

        if(check_password()){
            n = balance;
            }
        }

    else{
        cout << "Account locked!\n";
        }

    return n;
}

bool Account::check_password(){
    int chk_pwd;
    bool success;
    for(int i = 0; i < 3; i++){
        cout << "Input your password: ";
        cin >> chk_pwd;
        if(chk_pwd == password){
            cout << "Password correct!\n";
            success = true;
            break;
        }
        else{
            cout << "Password incorrect\n";
            success = false;
        }
    }
    if(!success){
        state = false;
        cout << "Too many attempt. Account locked.";
    }

    return success;
}

int Account::changepassword(){
    if(state){

        if(check_password()){
            cout << "Input new password: ";
            cin >> password;
            }
        }
    return password;
    }
