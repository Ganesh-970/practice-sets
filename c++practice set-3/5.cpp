/*
Define a class Employee with private members id and salary. Use
setters and getters to initialize and display their values. In main(),
create multiple employees and print their details.
*/


#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    double salary;

    public:
    void setid(int iii){
        id=iii;
    }

    int getid(){
        return id;
    }

    void setsalary(double sal){
        salary=sal;
    }

    double getsalary(){
        return salary;
    }
};

int main(){
    employee d1,d2,d3;
    d1.setid(987);
    d1.setsalary(999.99);

    d2.setid(123);
    d2.setsalary(777.99);

    d3.setid(567);
    d3.setsalary(899.99);

    cout<<"the employee details are: "<<endl;
    cout<<"the employee d1 id and salary is:  "<<d1.getid()<<" "<<d1.getsalary()<<endl;
    cout<<"the employee d2 id and salary is:  "<<d2.getid()<<" "<<d2.getsalary()<<endl;
    cout<<"the employee d3 id and salary is:  "<<d3.getid()<<" "<<d3.getsalary()<<endl;
return 0;
}


