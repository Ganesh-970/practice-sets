// Write a program to read your name and age, and print them in the format:
// Hello <name>, you are <age> years old.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enetr ur name: ";
    cin>>name;
    cout<<"enetr ur age: ";
    cin>>age;

    cout<<"hello "<<name<<", you are "<<age;

    return 0;
}