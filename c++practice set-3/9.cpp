/*
Write a class Temperature with a private member celsius. Provide
setCelsius() and getFahrenheit() methods to convert the stored
temperature to Fahrenheit.
*/


#include<iostream>
using namespace std;
class temperature{
    private:
    double celsius;

    public:
    void settemparature(double c){
        celsius = c;
    }

    double gettemparature(){
        return (celsius*9.0/5.0)+32;
    }
};

int main(){
    temperature t1;
    t1.settemparature(0);
    cout<<"the temparature in Fahrenheit is"<<t1.gettemparature()<<endl;

    return 0;
}