#include<iostream>
using namespace std;

class Teacher{
public:
    string name;
    int age;

    Teacher(){
        cout<<"Teacher Constructor"<<endl;
    }
};

class Student:public Teacher{
public:
    int rollno;

    Student(){
        cout<<"Student Constructor"<<endl;
    }

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
