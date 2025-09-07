/*
Define a class Car with members brand, model, and price. 
Overload constructors to:
• Initialize brand only.
• Initialize brand and model.
• Initialize brand, model, and price.
*/

#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
    string brand;
    string model;
    float price;

    public:
    Car(string bran){
        this->brand = bran;
        this->model = "unknown";
        this->price = 00.00;
        
    }

    Car(string bran,string mod){
        this->brand = bran;
        this->model = mod;
        this->price = 00.00;
    }

    Car(string bran,string mod,float pri){
        this->brand = bran;
        this->model = mod;
        this->price = pri;
    }

    void display(){
        cout<<" the brand is : "<<this->brand<<" and the model is : "<<this->model<<" the price is :  "<<this->price<<endl;
    }
};


int main(){
    Car c1("bmw");
    c1.display();

    Car c2("bmw","m3");
    c2.display();

    Car c3("bmw","m3",10000.77);
    c3.display();

    return 0;
}