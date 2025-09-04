// Generate the Fibonacci series up to n terms.

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"say upto how many digits do u want to find this fibnacci series: ";
    cin>>n;

    int first =0,second=1;
    
    for(int i=1;i<=n;i++){
        cout<<first<<" ";
        int next=first+second;
        first=second;
        second=next;
    }

    cout<<endl;
    return 0 ;

}