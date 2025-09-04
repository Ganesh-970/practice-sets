// Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and
// imaginary roots using if-else.)


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float root1,root2;

    cout<<"enetr the co-efficient of the x^2: ";
    cin>>a;

    cout<<"enetr the co-efficient of the x: ";
    cin>>b;

    cout<<"enetr the constant: ";
    cin>>c;


    int dis = ((b*b) - 4*a*c);

    if(dis<0){
        cout<<"the roots are imaginary";
        float dis_image = -dis;
        float real,imag;
        real = (-b/(2*a));
        imag = (sqrt(dis_image)/(2*a));
        
        cout<<"roots are"<<real<<" + "<<imag<<"i ,"<<real<<" - "<<imag<<"i";
    }

    else if(dis>0){
        cout<<"the roots are real";
        root1=(-b+sqrt(dis)/(2*a));
        root2=(-b-sqrt(dis)/(2*a));

        cout<<"the roots are"<<root1<<","<<root2;
    }


    else if(dis==0){
        cout<<"The roots are same";
        root1 = (-b/(2*a));
        cout<<"the roots "<<root1<<","<<root1;

    }

    return 0;
}