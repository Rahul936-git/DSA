// this default copy constructor is also an example of shallow copy ,
//  memeory allocation at stack
// statically memeory allocation


#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double cgpa;

    Student(string name,double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
    }
};

int main(){
    Student s1("Rahul kumar",8.5);

    Student s2(s1);
    s2.getInfo();
}