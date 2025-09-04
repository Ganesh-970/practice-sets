/* Write a program to find the GCD (Greatest Common Divisor) of two
numbers using a while loop. */

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter n: ";
    cin>>n;

    cout<<"enetr m: ";
    cin>>m;


    while(m!=0){
        int temp=m;
        m=n%m;
        n=temp;
    }
    cout<<n;
    return 0;
}




// // this down code also same but using for loop

// // Write a program to find the greatest common divisor (GCD) of two 
// // numbers using a loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enetr n : ";
//     cin>>n;
//     cout<<"enetr m : ";
//     cin>>m;

//     int gcd=1;
//     for(int i=1;i<=min(m,n);i++){
//         if(n%i==0 && m%i==0){
//             gcd = i;
//         }
//     }

//     cout<<"greatest common divisor(GCD) is : "<<gcd<<endl;
    
//     return 0;
// }