// Print all prime numbers between 1 and 100.

#include<iostream>
using namespace std;
int main(){
    for(int num=2;num<=100;num++){
        bool isprime=true;

        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<num<<" ";
        }
    }


    return 0;
}