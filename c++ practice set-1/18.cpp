// Check whether a given number is a palindrome or not. 
// (Example: 121 ispalindrome, 123 is not.)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num to find palindrome or not: ";
    cin>>n;


    int original = n;
    int reversed = 0;
    while(n!=0){
        reversed=reversed*10+(n%10);
        n=n/10;
    }


    cout<<reversed;
    if (reversed==original){
        cout<<" this is a palindrone number";
    }else{
        cout<<" this number is not palindrone";
    }

    return 0;
}