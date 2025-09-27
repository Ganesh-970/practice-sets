/*
Write a C++ program to demonstrate a friend function that accesses
private members of two different classes.
*/

#include<iostream>
using namespace std;
class class2;
class class1
{
    private:
    int n1;
    public:
    class1(int a)
    {
        n1=a;
    }
    friend void display(class1,class2);
};
class class2
{
    private:
    int n2;
    public:
    class2(int b)
    {
        n2=b;
    }
    friend void display(class1,class2);
};
void display(class1 objA,class2 objB)
{
    cout<< " The value of first class "<<objA.n1<<endl;
    cout<<" The Value of Second class "<<objB.n2<<endl;
    cout<<" The multiple= "<<objA.n1 * objB.n2<<endl;
}
int main()
{
    class1 c1(3);
    class2 c2(6);
    display(c1,c2);
    return 0;
}