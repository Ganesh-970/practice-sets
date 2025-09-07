/*
Create a class Fraction with numerator and denominator. Overload
constructors to:
• Initialize fraction as 0/1.
• Initialize with numerator only (denominator = 1).
• Initialize with numerator and denominator.
Also, add a member function to reduce the fraction to simplest form.
*/


#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denomenater;


    int gcd(int a,int b){
        if(b==0){
            return a;
        }else
      {
         return gcd(b,a%b);
      }
    }

    public:
    Fraction(){
        this->numerator = 0;
        this->denomenater = 1;
    }

    Fraction(int num){
        this->numerator=num;
        this->denomenater = 1;
    }


    Fraction(int num,int deno){
        this->numerator = num;
        if(deno == 0){
            cout<<"denominator 0 is not valid";
            this->numerator=num;
            this->denomenater = 1;
        }else{
            this->numerator = num;
            this->denomenater = deno;
            reduce();
        }
    }

    void reduce(){
        int g = gcd(numerator,denomenater);
        numerator = numerator/g;
        denomenater = denomenater/g;
    }

        void display(){
            cout<<this->numerator<<"/"<<this->denomenater<<endl;
        }
    };






int main(){

    Fraction f1;
    Fraction f2(6);
    Fraction f3(8,6);
    f1.display();
    f2.display();
    f3.display();
    return 0;
}


    

