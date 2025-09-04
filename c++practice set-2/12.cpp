/* Use if-else with a loop: Print “Fizz” if a number is divisible by
3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both (for
numbers 1 to 50). */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a num from to 1 to 50: ";
    cin>>n;

    if(n%3==0 && n%5==0 && n>=0 &&n<=50){
        cout<<"FizzBUzz";
    }
    else if(n%3==0 && n>=0 &&n<=50){
        cout<<"Fizz";
    }else if(n%5==0 && n>=0 &&n<=50){
        cout<<"BUZZ";
    }

return 0;
}





// u can do like this also (below like)

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}