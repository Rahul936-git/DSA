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
    A *ptr;  // pointer store the address of variable and function
    B obj;
    ptr=&obj;
    ptr->disc(); // Arrow operator ke through pointer se member ko call karte hai
    // above pointer call its own function
}