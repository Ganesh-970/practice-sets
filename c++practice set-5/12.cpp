/*
Implement dynamic memory allocation in a constructor and deallocate
it using a destructor.
*/



#include<iostream>
using namespace std;
class array{
    private:
    int *arr;
    int size;

    public:
    array(int a){
        size = a;
        // int *arr = (int*)malloc(5 * sizeof(int));
        arr  = new int[size];
        cout<<"the array of size : "<<size <<endl;

        for(int i = 0;i<size;i++){
            arr[i] = i+2;
        }
    }
    ~array(){
        //free(arr);
        delete[]arr;
        cout<<"memory deallocated "<<endl;
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    array a(6);
    a.display();
    return 0;
}