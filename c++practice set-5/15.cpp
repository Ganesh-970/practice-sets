/*
Write a class that counts the number of objects created using a static
variable inside a constructor.
*/


#include<iostream>
#include<string>
using namespace std;
class Count{

    private:
    static int count;
    public:
    Count(){
        count++;
    }

    static int valuecount(){
        return count;
    }
};

int Count :: count = 0;

int main(){
    Count c1,c2,c3,c4;
    cout<<"the num of objects created was: "<<Count ::valuecount()<<endl;

    return 0;
}