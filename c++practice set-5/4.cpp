/*
Write a program where a friend function swaps private variables of
two classes.
*/

#include<iostream>
using namespace std;
class class2;

class class1{
    private:
    int x;
    public:
    class1(int a){
        x=a;
    }

    void display(){
        cout<<"your number is : "<<x<<endl;
    }
    friend int swap(class1 &objA,class2 &objB);
};

class class2{
    private:
    int y;
    public:
    class2(int b){
        y=b;
    }

    void display(){
        cout<<"your second number is : "<<y<<endl;
    }
    friend int swap(class1 &objA,class2 &objB);
};

int swap(class1 &objA,class2 &objB){
    int temp = objA.x;
    objA.x = objB.y;
    objB.y = temp;
}



int main(){

    class1 c(8);
    class2 d(9);

    cout<<"before swap : "<<endl;
    c.display();
    d.display();


    swap(c,d);
    cout<<"after swap : "<<endl;
    c.display();
    d.display();


    return 0;
}