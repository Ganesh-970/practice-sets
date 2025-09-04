// Find the sum of digits of a given number. (Example: input 1234 → output 10)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a number to do sum";
    cin>>n;

    int sum=0;
    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"the sum is "<<sum<<endl;

    return 0;
}