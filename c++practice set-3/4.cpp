/*
Create a class Rectangle with private data members length and width.
Write setter and getter methods and calculate the area using them.
*/

#include<iostream>
using namespace std;

class rectangle{
    private :
    double lenght;
    double width;

    public:
    void setlength(double leng){
        if(leng>0){
             lenght = leng;
        }
        else{
            lenght = 1;
        }
    }

    double getlenght(){
        return lenght;
    }


    void setwidth(double widt){
        if(widt>0){
            width = widt;
        }else{
            width = 1;
        }
    }

    double getwidth(){
        return width;
    }


    double area(){
        return lenght*width;
    }

};


int main(){
    rectangle r1;
    r1.setlength(9);
    r1.setwidth(5);

    cout<<"the lenght of rectangle is : "<<r1.getlenght()<<endl;
    cout<<"the width of rectangle is : "<<r1.getwidth()<<endl;

    cout<<"the area of this rectangle is : "<<r1.area();

    return 0;
    

}