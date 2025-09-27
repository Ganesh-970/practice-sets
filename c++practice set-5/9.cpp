/*
Implement a copy constructor to initialize an object using another ob-
ject of the same class.
*/

#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    float marks;

    public:
    student(){
        name = "unknown";
        marks = 0.0;
    }
    student(string nn,int m){
        name = nn;
        marks = m;
    }

    student(const student &s){
        name = s.name;
        marks = s.marks;
        cout<<"copy constructor is called"<<endl;
    }

    void get_details(){
        cout<<"name: "<<name<<"\n marks : "<<marks<<endl;
    }
};


int main(){
    student s1("vsg",98976.863);
    student s2 = s1;

    cout<<"original output: "<<endl;
    s1.get_details();

    cout<<"the copied output: "<<endl;
    s2.get_details();

    return 0;

}