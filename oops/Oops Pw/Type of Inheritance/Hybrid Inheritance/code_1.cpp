#include<iostream>
using namespace std;

class parent{
public:
    parent(){
        cout<<"parent constructor"<<endl;
    }
};

class child1: public parent{
public:
    child1(){
        cout<<"child1 constructor"<<endl;
    }
};

class child2 : public parent{
public:
    child2(){
        cout<<"child2 constructor"<<endl;
    }
};

class GrandChild:public child1 ,public child2{
public:
    GrandChild(){
        cout<<"Grandchild constructor"<<endl;
    }
};


int main(){
    GrandChild g1;
}