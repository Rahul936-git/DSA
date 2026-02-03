#include<iostream>
using namespace std;

class Parent{
public:
    void getinfo(){
        cout<<"Parent class"<<endl;
    }

    virtual void hello(){
        cout<<"Hello from Parent class"<<endl;
    }
};

class Child{
public:
    void getinfo(){
        cout<<"Child class"<<endl;
    }

    void hello(){
        cout<<"Hello from Child class"<<endl;
    }
};

int main(){
    Child c1;
    c1.getinfo();
    c1.hello();
}