/*
Write a program with a default constructor that initializes values and
a function to display them.
*/

#include<iostream>
using namespace std;
class hello{
    private:
    int real;
    int image;
    public:
    hello(){           // this is default constructor
        this->real = 0;
        this->image = 0;
    }

    void display(){
        cout<<"the complex num is : "<<this->real<<" + "<<this->image<<"i"<<endl;
    }

};


int main(){
    hello h;
    h.display();
    return 0;
}
