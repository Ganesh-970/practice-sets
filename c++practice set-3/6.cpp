/*
Write a class Car with private members brand and model. Provide
setter and getter methods. In main(), create an array of cars and use
the methods to assign and print their values.
*/


#include<iostream>
#include<string>
using namespace std;
class car{
    private : 
    string brand;
    string model;

    public:
    void setmodel(string mod){
        model = mod;
    }

    string getmodel(){
        return model;
    }


    void setbrand(string bra){
        brand  = bra;
    }

    string getbrand(){
        return brand;
    }

    void display(){
        cout<<"brand : "<<brand<<","<<"model: "<<model<<endl;
    }
};


int main(){
    int size = 3;
    car cars[size];

    cars[0].setbrand("Scuderia Ferrari");
    cars[0].setmodel("F8");
    cars[1].setbrand("Tata Motors");
    cars[1].setmodel("Nexon");
    cars[2].setbrand("Tata Motors");
    cars[2].setmodel("Harrier");
    for(int i=0;i<5;i++){
        cars[i].display();
    }
    
    return 0;
}