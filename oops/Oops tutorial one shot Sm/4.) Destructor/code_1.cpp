// Deep copy by custom copy constructor

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double *cgpaPtr;

    Student(string name,double cgpa){
        this->name=name; 
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }

    ~Student(){
        cout<<"Hi!, I delete everything"<<endl;
        delete cgpaPtr;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;    //  find cgpa by  dereferenceing *cgpaPtr
    }
};

int main(){
    Student s1("Rahul kumar",8.5);
    s1.getInfo(); 

    
}