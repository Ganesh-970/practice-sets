// Read an integer and check whether it is even or odd.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num to check even or odd: ";
    cin>>n;

    if(n%2==0){
        cout<<"it is even num ";
    }else if(n%2!=0){
        cout<<"this num is odd number ";
    }else{
        cout<<"enetr a valid number";
    }

    return 0;
}