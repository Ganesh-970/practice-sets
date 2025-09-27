/*
Demonstrate constructor overloading with three constructors:
• One without parameters
• One with one parameter
• One with two parameters
*/


#include<iostream>
#include<string>
using namespace std;
class university{
    private:
    string name;
    int roll_num;
    public:

    university(){
        this->name = "unknown";
        this->roll_num = 0;
    }

    university(string nn){
        this->name = nn;
        this->roll_num = 0;
    }
    university(string nn,int rn){
        this->name = nn;
        this->roll_num = rn;
    }

    void display(){
        cout<<"the students details are : "<<endl;
        cout<<"the name of the student is  :"<<this->name<<endl;
        cout<<"the roll num of the student is : "<<this->roll_num<<endl;
    }
};


int main(){
    university u1;
    u1.display();

    university u2("vsg");
    u2.display();

    university u3("chowdary",99);
    u3.display();

    return 0;
}