/*
Create a class Distance with data members feet and inches. Imple-
ment constructors for:

• Default initialization.
• Initialization using feet only.
• Initialization using feet and inches.
Also, write a function to display the distance.
*/


#include<iostream>
using namespace std;
class Distance{
    private:
    float feet;
    float inches;

    public:
    Distance(){
        this->feet = 00.00;
        this->inches = 00.00;
    }

    Distance(float fe){
        this->feet = fe;
        this->inches = 00.00;
    }

    Distance(float fe,float inc){
        this->feet = fe;
        this->inches = inc;
    }


    void display(){
        cout<<"feet= "<<this->feet<<" inches= "<<this->inches<<endl;
        cout<<"the disance is : "<<this->feet + (this->inches/12)<<endl;  // to calculate distance
    }
};

int main(){
    Distance d1;
    d1.display();

    Distance d2(2);
    d2.display();

    Distance d3(2,24);
    d3.display();

    return 0;

}