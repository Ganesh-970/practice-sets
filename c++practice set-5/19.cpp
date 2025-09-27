/*
Write a program to demonstrate private data members with getter
and setter functions.
*/

#include<iostream>
using namespace std;
class BankAccount{
    private:
    double balance;
    public:
    void set_balance(double r){
        if(r>=0){
        balance=r;
        }
        else{
        cout<< " Error: Negative "<<endl;
        balance=0;
        }
    }
    double get_balance(){
        return balance;
    }
};
int main(){
    BankAccount account1;
    account1.set_balance(1000);
    cout<< " Account Balance: "<<account1.get_balance()<<endl;
    account1.set_balance(-100);
    cout<< " Account Balance: "<<account1.get_balance() << endl;
    return 0;
}