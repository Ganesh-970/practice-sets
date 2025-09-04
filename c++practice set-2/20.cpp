/* Write a program to keep taking marks as input until the user enters
−1, then print the average of the entered marks. */


#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0,count=0;

    cout<<"enetr a number : ";
    cin>>n;

    while(n!=-1){
        
        sum=sum+n;
        count++;
        cout<<"enetr another number : ";
        cin>>n;
    }

    if(count>0){
        cout<<"average is "<<sum/count;
    }else{
        cout<<"no marks entered";
    }
    return 0;

    }





    // this below code is just for practice




// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, count = 0;

//     cout << "Enter marks (-1 to stop): ";
//     cin >> n;

//     while (n != -1) {
//         cout<<"enetr a number";
//         sum += n;
//         count++;
//         cin >> n;
//     }

//     if (count > 0)
//         cout << "Average is " << sum / count << endl;
//     else
//         cout << "No marks entered." << endl;

//     return 0;
// }