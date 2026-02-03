#include<iostream>
using namespace std;

class TA{
public:
    string college;
};

class Student : public TA{
public:
      string name;
      int rollno;
};

class Teacher : public TA{
public:
    string subject;
    long salery;
};

int main(){
    Teacher t1;
    Student s1;

    t1.college="movie";
    t1.subject="Fight club";
    t1.salery=7896785;

    cout<<t1.college<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salery<<endl;

    s1.name="Tyler";
    s1.rollno=98;
    s1.college="movie";

    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.college<<endl;
}