// Write a program to calculate the power of a number (a^b) using a while loop.

#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"eneter a: ";
    cin>>a;
    cout<<"enetr b: ";
    cin>>b;

    int result = 1;
    int i=0;

    if(b<=0){
        result=1;
        
    }else{
        do{
            result=result*a;
            i++;
    }while(i<b);            // if u initalize i=1 then here u can write as i<=b
    }


    cout<<a<<" ^ "<<b<<" = "<<result;
    return 0 ;
}