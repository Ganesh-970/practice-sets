// Write a program to print the multiplication table of a given number using a for loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num for mulltiplication : ";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }return 0;
    
}
