/*
Design a class Book with attributes title, author, and price. Provide
constructor overloading to allow creating:
• Book with title only.
• Book with title and author.
• Book with title, author, and price.
*/

#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string title;
    string author;
    float price;

    public:
    book(string tit){
        this->title = tit;
        this->author = "unknown";
        this->price = 00.00;
    }

    book(string tit,string aut){
        this->title = tit;
        this->author = aut;
        this->price = 00.00;
    }

    book(string tit,string aut,float pri){
        this->title = tit;
        this->author = aut;
        this->price = pri;
    }

    void display(){
        cout<<"the book name is : "<<this->title<<" and the author of this book is : "<<this->author<<" the price of this book is : "<<this->price<<endl;
    }


};

int main(){
    book b1("vsg");
    b1.display();

    book b2("vsg","chowdary");
    b2.display();

    book b3("vsg","chowdary",999.25);
    b3.display();

    return 0;
}