/*
Create a class BankAccount where static variables store the interest rate
applicable to all accounts.
*/


#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    string name;
    double balance;
    static double intrest;

    public:
    bankaccount(string nn,double bal){
        name = nn;
        balance = bal;
    }


    void display(){
        cout<<"acc holder name : "<<name<<endl;
        cout<<"balance : "<<balance<<endl;
        cout<<"intrest rate :"<<intrest<<endl;
    }

    static void setintrest(double rate){
        intrest = rate;
    }






};

double bankaccount :: intrest = 5.0;

int main(){
    bankaccount acc1("vsg",1000);
    bankaccount acc2("sai",5000);

    cout<<"when the intrest is 5"<<endl;
    acc1.display();
    acc2.display();


    bankaccount :: setintrest(10.0);  // setting intrest to all accounts
    cout<<"when the intrest is 10"<<endl;
    acc1.display();
    acc2.display();


    return 0;

}