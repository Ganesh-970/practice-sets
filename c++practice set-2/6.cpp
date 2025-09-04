// Print the digits of a number in reverse order using a do-while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num to reverse: ";
    cin>>n;

    int temp=n;
    int reversed=0;

    do{
        reversed=reversed*10+(n%10);
        n=n/10;


    }while(n!=0);

    cout<<"the reversed num of "<<temp<<"is "<<reversed;
    return 0 ;

} 