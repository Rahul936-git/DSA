#include<iostream>
using namespace std;

class Parent{
public:
    void getinfo(){
        cout<<"Parent class"<<endl;
    }
};

class Child{
public:
    void getinfo(){
        cout<<"Child class"<<endl;
    }
};

int main(){
    Child c1;
    c1.getinfo();

    Parent p1;
    p1.getinfo();
}