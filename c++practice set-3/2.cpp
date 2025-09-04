/*
Define a class BankAccount with a private member balance. Provide
methods setBalance() and getBalance() to update and view the
balance. Ensure that negative values cannot be assigned.
*/


#include<iostream>
using namespace std;
class BankAccount{
    private:
    double balance;

    public :
    BankAccount(){
        balance = 0;
    }

    void setBalance(double bal){
        if(bal>=0){
            balance = bal;
        }else{
            cout<<"negative balance is not allowed:"<<endl;
        }
    }

    double getbalance() {
        return balance;
    }
};

int main(){
    BankAccount d1;
    d1.setBalance(5000);
    cout<<"current balance : "<< d1.getbalance()<<endl;

    return 0;
    
}