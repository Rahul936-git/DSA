#include<iostream>
using namespace std;

class Teacher{
public:
    string name;
    int age;

    Teacher(string name ,int age){   // Parametrized constructor in Inheritance
        this->name=name;
        this->age=age;
    }
};

class Student:public Teacher{
public:
    int rollno;

    Student(string name ,int age, int rollno):Teacher(name,age){
        this->rollno=rollno; 
    }

    // void showInfo(){
    //     name="Rahul kumar";
    //     age=21;
    //     rollno=50;
    // }

    void getInfo(){
        // showInfo();
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};

int main(){
    Student s1("Rahul kumar",21,50);
    s1.getInfo();
}