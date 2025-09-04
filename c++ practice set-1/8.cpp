// Find the sum of the first n natural numbers.

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;

    cout<<"enetr the the num up to which  natural num u want";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }

    cout<<"the sum of all"<<n<<"natural numbers is"<<sum<<endl;

    return 0;
}