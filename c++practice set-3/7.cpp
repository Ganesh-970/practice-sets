/*
Implement a class Circle with a private data member radius. Provide
setters and getters, and an additional method getArea() that uses the
getter to calculate the area.
*/


#include<iostream>
using namespace std;
class circle {
    private:
    float raidus;

    public:
    void setradius(float radi){
        raidus = radi;
    }

    float getradius(){
        return raidus;
    }

    double area(){
        return 3.14*(raidus*raidus);
    }
};


int main(){
    circle c1;
    c1.setradius(1);
    cout<<"the radius of the circle with radius "<<c1.getradius()<<" is "<<c1.area()<<endl;

    return 0;
}