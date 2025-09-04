//  Reverse the digits of a given number. (Example: input 1234 → output 4321)

#include<iostream>
using namespace std;
int main(){
    int n;                   // YOU U WANT TO REVERSE A BIG NUM THEN REPLACE  long long n; IN PLACE OF int n;

    cout<<"enetr a num to reverse";
    cin>>n;

    int reversed = 0;            // if u use long long n in up here also change to long long reversed
    while(n!=0){
    reversed = reversed*10+(n%10);
    n=n/10;
}
cout<<"reversed: "<<reversed<<endl;
return 0;

}