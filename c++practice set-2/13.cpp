// Take a number as input and check if it is an Armstrong number using a while loop.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,original,remainder,digits=0,result=0;
    cout<<"enetr the number to check weather it is Armstrong or not: ";
    cin>>n;
    original = n;

    // Step 1: Count the number of digits
    int temp = n;
    while(temp != 0){
        digits++;
        temp = temp/10;
    }

    // Step 2: Compute the Armstrong sum
    temp = n;
    while(temp != 0 ){
        remainder = temp % 10;
        result=result+round(pow(remainder,digits));
        temp=temp/10;
    }

    // step 3 : compare and print result
    if(result== original){
        cout<<original<<" is a armstrong";
    }else{
        cout<<original<<" is not a armstrong";
    }
    return 0;
}









// this below code code is just i pracited


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,original,remainder,digits=0,result=0;

    cout<<"enetr a number to check it is armstrong or not: ";
    cin>>n;
    original = n;


    int temp=n;
    while(temp!=0){
        digits++;
        temp=temp/10;
    }

    int temp=n;
    while(temp!=0){
        remainder=temp%10;
        result=result+round(pow(remainder,digits));
        temp=temp/10;
    }


    if(result==original){

    }
}