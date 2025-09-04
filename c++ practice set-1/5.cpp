#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enetr the num to check wheather it is positive or negative or zero: ";
    cin>>n;

    if(n>0){
        cout<<"the number "<<n<<"is positive";
    }else if(n<0){
        cout<<"the number "<<n<<"is negative";
    }else if(n==0){
        cout<<"the number is zero";
    }
    return 0;
}