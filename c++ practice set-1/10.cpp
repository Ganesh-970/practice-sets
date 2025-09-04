//  Check whether a given year is a leap year or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the year to check wheather it is leap year or not: ";
    cin>>n;


    if ((n%4==0 && n%100 !=100 ) || (n%400 == 0)){
        cout<< "the year "<<n<<" is a leap year";
    }else{
        cout<<"the year "<<n<<" is not a leap year";
    }
    return 0;
}