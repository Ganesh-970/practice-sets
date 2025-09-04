// Check whether a number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num to check prime or not..? : ";
    cin>>n;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n<<"number is not prime";
            return 0;
        }
    }
    cout<<n<<" is a prime number";
    return 0;
}