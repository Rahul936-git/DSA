// Deep copy by Default copy constructor

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

    Student(Student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;    //  find cgpa by  dereferenceing *cgpaPtr
    }
};

int main(){
    Student s1("Rahul kumar",8.5);
    s1.getInfo();   //cgpa: 8.5

    Student s2(s1);
    // s2.getInfo();  // change cgpa for second student to 9.2
    *(s2.cgpaPtr)=9.2;
    s2.name="rahul";
    s2.getInfo();   // cgpa: 9.2
}