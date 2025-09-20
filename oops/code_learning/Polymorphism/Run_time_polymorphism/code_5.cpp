                        // Rum Time Polymorphism

#include<iostream>
using namespace std;

class A{
    public:
    virtual void disc(){        //ignore  or overide
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
   obj.A::disc();
}