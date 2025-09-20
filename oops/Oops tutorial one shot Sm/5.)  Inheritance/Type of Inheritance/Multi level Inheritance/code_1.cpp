#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class student:public Person{
public:
    int rollno;
};

class GratStudent:public student{
public:
    string researchArea;
};

int main(){
    GratStudent g1;
    g1.name="Tyler dertan";
    g1.age=35;
    g1.researchArea="Fight club";

    cout<<g1.name<<endl;
    cout<<g1.age<<endl;
    cout<<g1.researchArea<<endl;
}



