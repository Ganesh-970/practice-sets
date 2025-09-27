/*
Implement a friend function to compare two objects of a class based
on private data.
*/

#include <iostream>
using namespace std;

class class1{
    int a;
    public:
    class1(int x){
        a=x;
    }

    friend int compare(class1 c1,class1 c2);

};



int compare(class1 c1,class1 c2){

    if(c1.a>c2.a){
        cout<<"first number is greater while comaring both"<<endl;
    }
    else {
        cout<<"second number is greater while comaring both"<<endl;
    }
}


int main(){
    class1 c1(88);
    class1 c2(9);
    compare(c1,c2);
    return 0;
}