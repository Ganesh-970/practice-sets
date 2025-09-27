/*
Demonstrate how destructors are called when objects are created inside
a block.
*/

#include<iostream>
#include<string>
using namespace std;

class bro{
    public:
    bro(){
        cout<<"constructor is created "<<endl;
    }

    ~bro(){
        cout<<"deconstructer is called"<<endl;
    }
    
};


int main(){
    bro b1;
    return 0;
}