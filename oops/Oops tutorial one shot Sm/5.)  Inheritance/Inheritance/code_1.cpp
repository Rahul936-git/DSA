#include<iostream>
using namespace std;

class person{
public:
      string name;
      int age;
};

class Student:public person{
public:
    int rollno;

    void showInfo(){
        name="Rahul kumar";
        age=21;
        rollno=50;
    }

    void getInfo(){
        showInfo();
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.getInfo();
}