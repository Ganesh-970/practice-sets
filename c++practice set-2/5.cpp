// Write a program to find the factorial of a number using a while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"give num to find factorial: ";
    cin>>n;

    int fact=1;
    int temp=n;                  // to store n which will be used in output
    if(n<0){
        cout<<"fact is not possible for negative numbers";
    }else{
    do{
        fact=fact*n;
        n--;
    }while(n>0);

    cout<<"the fact of "<<temp<<" is "<<fact;
}
return 0;
}