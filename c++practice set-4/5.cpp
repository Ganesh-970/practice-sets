/*
Write a C++ program with a class Time having data members hours,
minutes, seconds. Overload constructors to:
• Initialize all with zero.
• Initialize hours and minutes, seconds defaulted to zero.
• Initialize all three.
*/


#include<iostream>
using namespace std;
class time{
    private:
    int hours;
    int minutes;
    int secondes;

    public:
    time(){
        this->hours = 00;
        this->minutes = 00;
        this->secondes = 00;
    };

    time(int hou,int min){
        this->hours = hou;
        this->minutes = min;
        this->secondes = 00;
    }

    time(int hou,int min,int sec){
        this->hours = hou;
        this->minutes = min;
        this->secondes = sec;
    }

    void display(){
        cout<<this->hours<<":"<<this->minutes<<":"<<this->secondes<<endl;
    }
};

int main(){
    time t1;
    t1.display();

    time t2(12,33);
    t2.display();

    time t3(12,33,44);
    t3.display();


    return 0;
}