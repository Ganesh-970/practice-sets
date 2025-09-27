/*
Create a class Rectangle with private length and width and use a friend
function to calculate the area.
*/

#include<iostream>
using namespace std;
class reactangle{
    private:
    float length;
    float width;

    public:
    reactangle(float lenn,float wid){
        this->length = lenn;
        this->width = wid;
    }

    friend float area(reactangle r1);


};

float area(reactangle r1){
    return r1.length * r1.width;
}


int main(){
    reactangle r(6,8);
    cout<<"the area of the rectangle is : "<< area(r)<<endl;
    return 0;
}