// classes and objects

#include<iostream>
using namespace std;

class Teacher{

    public:
    // properties or Attributes
    string name;
    string dept;
    string subject;
    double salery;

    // methods or member function
    void changeDept(string newDept){
        dept=newDept;
    }
};

int main(){
    Teacher t1;
    t1.name="RAHUL";
    t1.subject="DSA";
    t1.dept="Computer science";
    t1.salery=55000;

    cout<<"name: "<<t1.name<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Dept: "<<t1.dept<<endl;
    cout<<"salery: "<<t1.salery<<endl;
}