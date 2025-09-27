/*
Write a class Complex to demonstrate constructor overloading by initial-
izing real and imaginary parts in different ways.
*/


#include<iostream>
using namespace std;
class complex{
    int real;
    int image;

    public:
    complex(){
        real = 0;
        image = 0;
    }

    complex(int r){
        real = r;
        image = 0;
    }

    complex(int r,int i){
        real = r;
        image = i;
    }

    void get_details(){
        cout<<"complex number with real and imaginary is : "<<endl;
        cout<<real<<"+"<<image<<"i"<<endl;
    }
};

int main(){
    complex c1;
    c1.get_details();

    complex c2(100);
    c2.get_details();

    complex c3(78,90);
    c3.get_details();

    return 0;
}