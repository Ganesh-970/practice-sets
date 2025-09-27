/*
Create a class Student with parameterized constructors to initialize
different sets of variables.
*/


#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int roll_num;
    float marks;

    public:
    student(string nn,int rn,float mar){
        this->name = nn;
        this->roll_num = rn;
        this->marks = mar;
    }
    void display(){
        cout<<"the student details are : "<<endl;
        cout<<"the name of the student is "<<this->name<<endl;
        cout<<"the roll num of the student is "<<this->roll_num<<endl;
        cout<<"the marks of the student is "<<this->marks<<endl;
    }
};

int main(){
    student s1("vsg",7634587,9074.0777);
    s1.display();
    return 0;
}