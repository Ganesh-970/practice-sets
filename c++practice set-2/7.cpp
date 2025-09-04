// Check whether a number is prime or not using a for loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number to check it is prime or not: ";
    cin>>n;

    bool isprime=true;
    if(n<=1){
        isprime=false;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isprime=false;
                break;
            }

        }
    }
    if(isprime){
        cout<<n<<" is prime";
    }else{
        cout<<n<<" is not prime";
    }
return 0;
        
    }
