// Find the sum of the first N natural numbers (input N) using a for loop

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enetr the number upto how many natural numbers do u want to add: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    
    }
    cout<<sum;
    return 0;
}