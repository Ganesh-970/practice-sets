// Print the sum of all even numbers from 1 to 100 using a for loop.

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=2; i<=100; i=i+2){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}