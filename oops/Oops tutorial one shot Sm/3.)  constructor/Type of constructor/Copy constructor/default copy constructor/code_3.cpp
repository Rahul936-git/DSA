// copy constructor

#include<iostream>
using namespace std;

class Teacher{
    private:
    double salary;
     
    public:
    // parameterized constructor
    Teacher(string n,string d,string s,double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    // properties or Attributes
    string name;
    string dept;
    string subject;

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
    // t1.getInfo();

    Teacher t2(t1);  // default copy constructor -invoke or call
    t2.getInfo();

    return 0;
}