/*
Write a program to create a class Student with data members name,
age, and marks. Implement both a default constructor and a parame-
terized constructor to initialize the data.
*/


#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    float marks;

    public:

    student(){
        this->name = "unknown";         // deafult constructer
        this->age = 0;
        this->marks = 0.0;
    }

    

    student(string nm,int aa,float mar){           
        this->name = nm;                        // parameterized constructor
        this->age = aa;
        this-> marks = mar;
    }

    void display (){
        cout<<"name : "<<this->name<<endl;
        cout<<"age : "<<this->age<<endl;
        cout<<"marks : "<<this->marks<<endl;

    }


};

int main(){
    student s1;
    s1.display();       // this is for deafult constructer

    student s2("vsg",20,99.1);   // this parameterized constructor
    s2.display();

    return 0;

}