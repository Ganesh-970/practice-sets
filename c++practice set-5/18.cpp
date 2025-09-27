/*
Show how static variables retain values between function calls.
*/

#include<iostream>
using namespace std;
class Count{
    private:
    static int count;
    public:
    static void Increse_Count(){
        count=count+1;
        cout<<" The Function Called: "<<count<<endl;
    }
};
int Count::count=0;
int main(){
    Count::Increse_Count();
    Count::Increse_Count();
    
    return 0;
}