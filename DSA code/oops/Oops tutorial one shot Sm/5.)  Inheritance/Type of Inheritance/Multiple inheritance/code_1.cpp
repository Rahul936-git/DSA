#include<iostream>
using namespace std;

class Student{
public:
      string name;
      int rollno;
};

class Teacher{
public:
    string subject;
    string salery;
};

class TA : public Student , public Teacher{
public:
    string college;
};

int main(){
    TA t1;

    t1.name="Tyler";
    t1.subject="Fight club";
    t1.college="movie";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.college<<endl;
}