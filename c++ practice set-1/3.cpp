// Take two integers as input and print the larger one using if-else.

#include<iostream>
using namespace std;
int main(){
    int n,m;

    cout<<"enetr first num(n) : ";
    cin>>n;

    cout<<"enetr second number(m): ";
    cin>>m;

    if(n>m){
        cout<<n;
    }else if(m>n){
        cout<<m;
    }else{
        cout<<"enetr correct numbers";
    }

return 0;
}