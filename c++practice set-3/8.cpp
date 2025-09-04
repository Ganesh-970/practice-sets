/*
Create a class Account with private members accountNumber and
balance. Provide setter and getter methods. In main(), ensure that
account details can only be accessed through these methods.
*/

#include<iostream>
using namespace std;
class account{
    private:
    int acc_no;
    double balance;

    public:
    void setacc_no(int ac_num){
        if(acc_no>0){
            acc_no=ac_num;
        }else{
            acc_no = 0;
        }
    }

    int getacc_no(){
        return acc_no;
    }

    void setbalance(double bal){
        if(balance>0){
            balance = bal;
        }else{
            balance = 0;
        }
    }

    double getbalance(){
        return balance;
    }
};

int main(){
    account a1;
    a1.setacc_no(123456789);
    a1.setbalance(50000);
    cout<<"the acc number is : "<<a1.getacc_no()<<endl;
    cout<<"the balance of this "<<a1.getacc_no()<<" is : "<<a1.getbalance()<<endl;

    return 0;
}