/*
Create a class Complex with two data members real and imag. Over-
load constructors to:

• Initialize both to zero (default constructor).
• Initialize with one value (real part only).
• Initialize with two values (real and imaginary parts).
*/


#include<iostream>
using namespace std;
class complex {
    private:
    double real;
    double image;

    public:
    complex(){
        this->real = 0.0;
        this->image = 0.0;
    }

    complex(double rr){
        this->real = rr;
        this->image = 0.0;
    }

    complex(double rr,double img){
        this->real = rr;
        this->image = img;
    }


    void display(){
        cout<<"real num  is : "<<this->real<<"and image num is : "<<this->image<<endl;
        cout<<"the complex num is : "<<this->real<<"+"<<this->image<<"i"<<endl;
    }
};

int main(){

    complex c1;
    c1.display();

    complex c2(22);
    c2.display();

    complex c3(23,4);
    c3.display();

    return 0;
}