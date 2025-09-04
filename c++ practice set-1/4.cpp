// Read three integers and print the largest number.

# include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"enetr numbers(a,b,c): ";
    cin>>a>>b>>c;

    if(a>b&&a>c){
        cout<<"the largest number is "<<a;
    }else if(b>c&&b>a){
        cout<<"the largest number is "<<b;
    }else if(c>a&&c>b){
        cout<<"the largest number is "<<c;
    }else{
        cout<<"invalid numbers";
    }
    return 0;
}