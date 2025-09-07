/*
Write a program to create a class Employee with data members name,
id, and salary. Implement:
• A constructor that initializes name and id only.
• A constructor that initializes all three values.
*/

#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string name;
    int id;
    float salary;

    public:
    Employee(string nn,int iii){
        this->name = nn;
        this->id = iii;
        this->salary = 00.00;
    }

    Employee(string nn,int iii,float sal){
        this->name = nn;
        this->id = iii;
        this->salary = sal;
    }

    void display(){
        cout<<"name : "<<this->name<<" id : "<<this->id<<" salary : "<<this->salary<<endl;

    }
};

int main(){
    Employee e1("vsg",78346);
    e1.display();

    Employee e2("vsg",8479,999.87);
    e2.display();

    return 0;

}