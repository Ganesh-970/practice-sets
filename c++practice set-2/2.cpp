// Print the first 10 even numbers using a while loop.

#include<iostream>
using namespace std;
int main(){
    int num=2;
    int count = 0;

    while(count<=10){
        cout<<num<<" ";
        num=num+2;
        count++;
    }
    return 0;
}


