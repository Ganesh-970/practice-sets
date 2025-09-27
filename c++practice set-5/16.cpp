/*
Implement a static function that accesses a static member variable to
keep track of the number of function calls.
*/


#include<iostream>
using namespace std;
class call{
    private:
    static int count;
    public:
    static void increase_count(){
        count = count + 1;
        cout<<"the function called"<<endl;
    }
};


int call :: count = 0;

int main(){
    call ::increase_count();
    call::increase_count();

    return 0;
}