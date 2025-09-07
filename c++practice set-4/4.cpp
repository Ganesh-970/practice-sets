/*
Implement a class BankAccount with data members accountNumber,
balance. Write multiple constructors for:
• Default initialization.
• Initialization with account number only.
• Initialization with account number and balance.
*/


#include<iostream>
using namespace std;
class bankaccount {
    private:
    int account_number;
    double balance;

    public:
    bankaccount(int acc_num){
        this->account_number = acc_num;
        this->balance = 0.0;
    }

    bankaccount(int acc_num,double balance){
        this->account_number = acc_num;
        this->balance = balance;
    }


    void display(){
        cout<<"the acc_number is "<<this->account_number<<endl;
        cout<<"the balance of this acc_num is : "<<this->balance<<endl;
    }
};

int main(){

    bankaccount b1(74874);
    b1.display();

    bankaccount b2(783498,995.8);
    b2.display();

    return 0;
}