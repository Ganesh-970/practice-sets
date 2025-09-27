/*
Implement a friend function that allows two classes to share a common
function to add private variables.
*/


#include<iostream>
using namespace std;
class class2;

class class1{
    private:
    int a;
    public:
    class1(int x){
        a=x;
    }
    friend int add(class1,class2);

};

class class2{
    private:
    int b;
    public:
    class2(int y){
        b=y;
    }
    friend int add(class1,class2);
};

int add(class1 objA,class2 objB){
    return objA.a+objB.b;

}


int main(){
    class1 c1(100);
    class2 c2(100);
    cout<<"the sum is : "<<add(c1,c2);
    return 0;
}