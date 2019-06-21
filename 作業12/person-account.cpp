#include <string>
#include <iostream>

using namespace std;

class Person{
    protected:
        string *name, *id, *address;
        int age;

    public:
        Person(){age = 0; id = NULL; name = NULL;}
        Person(string*, string*, string*, int);
        ~Person(){
            delete id;
            delete name;
            delete address;
        }
        int getage(){return age;}
        string *getid(){return id;}
        string *getname(){return name;}
        string *getaddess(){return address;}
        void print();

};


class Account{
protected:
    int password;
    long balance;
    bool state;
    int accid;
    bool check_password();

public:
    Account(){accid = 0; password = 0; balance = 0; state = true;}
    Account(int, int, long);
    long deposit();
    long withdraw();
    int changepassword();
    long query();

};

class PersonAccount: public Person, public Account{
    public:
        PersonAccount(){;}
        PersonAccount(string*, string*, string*, int, int , int, long);
        ~PersonAccount(){}
        void open();

};


int main(){
    PersonAccount p1, p2, a;
    string name1 = "admin", id1 = "A123456789", addr1 = "TPE";
    int age1 = 30, accid1 = 5436127, pswd1 = 1234, n = 0;
    long blce1 = 0;

    p1 = PersonAccount(&name1, &id1, &addr1, age1, accid1, pswd1, blce1);

    cout << "Person 1:";
    p1.print();

    p2.open();


    a = p2;

    cout << "\nDeposit 2\nWithdraw 3\nChange password 4\nCheck balance 5\n";
    cout << "Quit 9\n";

    while(true){

        cout <<"Input n: "; cin >> n;

        switch (n) {
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


Person::Person(string* a_name, string* a_id, string* a_address, int a_age){
    name = a_name;
    id = a_id;
    address = a_address;
    age = a_age;
}

void Person::print(){
    cout << "Name: " << *name << "\n";
    cout << "id: " << *id << "\n";
    cout << "Address: " << *address << "\n";
    cout << "Age: " << age << "\n";
    }



PersonAccount::PersonAccount(string* a_name, string* a_id, string* a_addr, int a_age, int a_accid,int a_pswd, long a_blce){
    name = a_name;
    id = a_id;
    address = a_addr;
    age = a_age;
    accid = a_accid;
    password = a_pswd;
    balance = a_blce;
    state = true;
}

void PersonAccount::open(){
    string my_name, my_id, my_addr;
    int my_age, my_accid, my_pswd;
    long my_blce;
    
    cout << "Input data: ";
    cin >> my_name >> my_id >> my_addr >> my_age;
    cin >> my_accid >> my_pswd >> my_blce;

    name = &my_name;
    id = &my_id;
    address = &my_addr;
    age = my_age;
    accid = my_accid;
    password = my_pswd;
    balance = my_blce;
}


Account::Account(int my_password, int my_id, long my_balance){
    password = my_password;
    accid = my_id;
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
