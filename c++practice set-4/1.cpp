/*
Define a class Rectangle with data members length and breadth.
Write a constructor to initialize both and a member function to calcu-
late the area.
*/



#include<iostream>
using namespace std;
class rectangle {
    private:
    double length;
    double breath;

    public:
    // creating constructor 
    rectangle(double len,double bre){
        this->length = len;
        this->breath = bre;
    }
    double area(){
        cout<<"area is "<<this->length*this->breath<<endl;
    }
};

int main(){
    rectangle r1(4,3);
    r1.area();
    return 0;

}