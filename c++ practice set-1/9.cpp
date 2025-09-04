// Find the factorial of a given number n.

#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter the number for which u want to find the factorial : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        fact =fact*i;
    }
    cout<<"the factorial of the"<<n<<"is "<<fact;
    return 0;
}