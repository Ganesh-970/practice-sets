/*
Create a class Student with private data members name and age. Write
setter and getter methods to assign and retrieve their values. Demon-
strate their use in main().
*/

#include<iostream>
#include<string>
using namespace std;

class student {
    private:
    string name;
    int age;

    public: 
    void set_values(string nn,int ag){
         name = nn;
         age = ag;
    }
    void get_values(void){
        cout<<"name "<<name<<"\nage "<<age<<endl;
    }
};

int main(){
    student d1;
    d1.set_values("vsg",21);
    d1.get_values();
    return 0;
}

