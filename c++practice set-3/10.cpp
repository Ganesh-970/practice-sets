/*
Define a class University with private members name and ranking.
Provide setters and getters. Demonstrate in main() that private data
members cannot be accessed directly, but only via the methods.
*/


#include<iostream>
#include<string>
using namespace std;
class university{
    private:
    string name;
    int rank;

    public:
    void set_values(string nm,int ran){
    name=nm;
    rank=ran;
    }

    void get_values(void){
        cout<<"the name is : "<<name<<" and the  "<<name<<" rank is  "<<rank<<endl;
    }

};


int main(){
    university u1;
    u1.set_values("sai university",2);
    u1.get_values();

    return 0;

}