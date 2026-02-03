//  constructor overloading --> It is an example of Compile time polymorphism

#include<iostream>
using namespace std;

class Master{
public:
    string name;

    student(){
        cout<<"non-parameterised"<<endl;
    }

    student(string name){
        this->name=name;
        cout<<"parameterised";
    }
};

int main(){
    Master s1;
    // s1.student();
    s1.student("Rahul");
}