// we use Inheritance in case of reusablity

#include<iostream>
using namespace std;

class Father{

    protected:
    string surname="Shaw";
};

class son1:Father{
    string name="Rahul";
    public:
    void show1(){
        cout<<name<<" "<<surname<<endl;
    }
};

class son2:Father{
    string name="Rohit";
    public:
    void show2(){
        cout<<name<<" "<<surname<<endl;
    }
};


int main(){
    son1 s1;   // object s1
    s1.show1();

    son2 s2;  // object s2
    s2.show2();
};


// Type of inheritance

// single inheritance
// Multiple inheritance
// Multilevel inheritance
// herical inheritance
// Hybrid Inheritance
