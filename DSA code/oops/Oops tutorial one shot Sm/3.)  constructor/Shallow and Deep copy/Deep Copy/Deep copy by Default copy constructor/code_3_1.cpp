// Deep copy

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    // double cgpa;
    double *cgpaPtr;

    Student(string name,double cgpa){
        this->name=name;
        // this->cgpa=cgpa;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;    //  find cgpa by  dereferenceing *cgpaPtr
    }
};

int main(){
    Student s1("Rahul kumar",8.5);

    Student s2(s1);
    s2.getInfo();
}