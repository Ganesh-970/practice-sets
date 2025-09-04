// Print the multiplication table of a given number using a do-while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the num to get multliply: ";
    cin>>n;

    int i = 1;
    do{
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;

    }while(i<=10);
    return 0;
}
