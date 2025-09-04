// Write a program to find the largest digit in a number using a do-while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a number to find largest digit in that number: ";
    cin>>n;


    if(n<0){
        n=-n;
    }
    int largest=0;
    int digit;
        do{
            digit=n%10;
            if(digit>largest){
                largest=digit;
            }
            n=n/10;
        }while(n>0);
    
    
    cout<<largest;
    return 0;

}







// this below code is just for practice

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num: ";
    cin>>n;

    if(n<0){
        n=-n;
    }


    int largest=0;
    int digit;
    do{
        digit=n%10;
        if(digit>largest){
            largest=digit;
        }
        n=n/10;
    }while(n>0);

    cout<<largest;
    return 0;
}