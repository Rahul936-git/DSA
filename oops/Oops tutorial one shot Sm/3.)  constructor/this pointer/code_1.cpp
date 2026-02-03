// this pointer -> point current object ->it is used to access the properties of object
//  this->prop   ====  *(this).prop;

#include<iostream>
using namespace std;

class Teacher{
    private:
    double salary;
     
    public:

    // properties or Attributes
    string name;
    string dept;
    string subject;

    // Non-parametrized constructor
    Teacher(){
        cout<<"Hi! I am constructor";
    }

    // parameterized constructor
    Teacher(string name,string dept,string subject,double salary){

        // object properties = constructor parameter
                   this->name=name;
                   this->dept=dept;
                this->subject=subject;
                 this->salary=salary;
    }

    // methods or member function
    void changeDept(string newDept){
        dept=newDept;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Dept: "<<dept<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};

int main(){

    Teacher t1("RAHUL","DSA","Computer science",58000);
    t1.getInfo();

}