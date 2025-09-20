// Constructor

#include<iostream>
using namespace std;

class Teacher{
    private:
    double salary;
     
    public:
    // Teacher(){
    //     cout<<"Hi! I am constructor";
    // }

    Teacher(){                      // Example of Non-parametrized constructor
        dept="Computer science";
    }

    // properties or Attributes
    string name;
    string dept;
    string subject;

    // methods or member function
    void changeDept(string newDept){
        dept=newDept;
    }
    // setter -> set the private value
    void showSalary(double s){
        salary=s;
    }
    // getter -> get the private value
    double displaySalary(){
        return salary;
    }
};

int main(){
    Teacher t1;  // automatic constructor call at the time of object creation
    t1.name="RAHUL";
    t1.subject="DSA";
    // t1.dept="Computer science";       // dept already initialise in constructor above
    t1.showSalary(58000);

    cout<<"name: "<<t1.name<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Dept: "<<t1.dept<<endl;
    cout<<"salary: "<<t1.displaySalary()<<endl;
}