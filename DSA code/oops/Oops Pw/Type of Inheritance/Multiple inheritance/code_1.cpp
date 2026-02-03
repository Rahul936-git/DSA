#include<iostream>
using namespace std;

class parent1{
public:
    parent1(){
        cout<<"parent1 constructor"<<endl;
    }
};

class parent2{
public:
    parent2(){
        cout<<"Parent2 constructor"<<endl;
    }
};

class child : public parent1, public parent2{
public:
    child(){
        cout<<"child constructor"<<endl;
    }
};

class GrandChild : public child{
public:
    GrandChild(){
        cout<<"Grandchild constructor"<<endl;
    }
};

int main(){
    GrandChild g1;
}