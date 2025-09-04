// Given marks of a student (0–100), print the grade: A (≥90), B (80–89),
// C (70–79), D (60–69), F (below 60).

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks u got to get grade";
    cin>>n;

    if(n>=90){
        cout<<"Your grade is A";
    }else if(n >= 80 && n <= 89){
        cout<<"you got grade B";
    }else if(n>=70 && n<=79){
        cout<<"your grade is C";
    }else if(n>=60 && n<=69){
        cout<<"your grade is D";
    }else if(n<60){
        cout<<"your grade is F";
    }else{
        cout<<"give correct marks u got broooo";
    }
    return 0;
}