/*
Write a program that prints a message when an object is created and
destroyed using a constructor and destructor.
*/


#include<iostream>
using namespace std;
class hello{
    public:
    hello(){
        cout<<"i created a constructor"<<endl;
    }


    ~hello(){
        cout<<"i destroyed constructor"<<endl;
    }
};

int main(){
    hello h1;
    return 0;
}