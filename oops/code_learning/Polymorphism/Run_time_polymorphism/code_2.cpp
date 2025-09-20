                        // Rum Time Polymorphism

#include<iostream>
using namespace std;

class A{
    public:
    void disc(){
        cout<<"It's class A";
    }
};

class B: public A{
    public:
    void disc(){
        cout<<"It's class B";
    }
};

main(){
    B obj;
    obj.disc();
}