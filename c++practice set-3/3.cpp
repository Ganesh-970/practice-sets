/*
Write a program that defines a class Book with private members title
and price. Implement setters and getters for both members, and print
the details of the book object.
*/

#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string title;
    float price;

    public:
    void settitle(string tit){
        title = tit;
    }

    void setprice(float pri){
        price = pri;
    }

    string gettitle(){
        return title;
    }

    float getprice(){
        return price;
}
};

int main(){
    book b1;
    b1.settitle("vsg_chowdary");
    b1.setprice(349.99);

    cout<<"the book title is : "<< b1.gettitle()<<endl;
    cout<<" the price of the "<<b1.gettitle()<<" is "<<b1.getprice();

    return 0;



}