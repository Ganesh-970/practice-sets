/*
Implement a class with a mix of public and private members and
show how functions access them correctly.
*/

#include<iostream>
#include<string>
using namespace std;
class Car{
  private:
  string brand;
  string model;
  public:
  void set_brand(string b){
    brand=b;
  }
  string get_brand(){
    return brand;
  }
  void set_model(string m){
    model=m;
  }
  string get_model(){
    return model;
  }
  void display(){
    cout<< " Brand: "<<brand<<endl;
    cout<< " Model: "<<model<<endl;
  }
};
int main()
{
    int size=2;
    Car cars[size];
    cars[0].set_brand(" Ferrari");
    cars[0].set_model("F8");
    cars[1].set_brand("ford");
    cars[1].set_model("Nexon");
    for(int i=0;i<size;i++)
    {
        cars[i].display();
    }
  return 0;
}