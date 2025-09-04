// Use a for loop to check if a number is a palindrome.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num to check the palindrome or not: ";
    cin>>n;

    int original =n;
    int reversed=0;
    
    for(int i=n;i>0;i=i/10){
        int digit = i%10;
        reversed=reversed*10+digit;
    }

    if(reversed==original){
        cout<<"this is palindrome";
    }else{
        cout<<"not a palindrome";
    }

    return 0;

}