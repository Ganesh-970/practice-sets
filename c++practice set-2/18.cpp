// Print the Fibonacci sequence up to N terms using a for loop.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr how many fibonacci series u need :";
    cin>>n;

    int first=0;
    int second=1;
    for(int i=0;i<n;i++){
        cout<<first<<" ";


        int next=first+second;
        first=second;
        second=next;
    }
    return 0;
}