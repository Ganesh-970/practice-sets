// Write a program to calculate the simple interest. 
// Formula: SI =(P×R×T)/100

#include<iostream>
using namespace std;
int main(){
    int p,r,t;                       // p(principle),r(rate),t(time)
    cout<<"enetr the p r ang t";
    cin>>p>>r>>t;

    cout<<"simple intrest is"<<((p*r*t)/100)<<endl;
    
    int total=p+((p*r*t)/100);
    cout<<"total is "<<total;
    return 0;
}
