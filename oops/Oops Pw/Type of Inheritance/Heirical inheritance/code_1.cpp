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
    parent2(){
        cout<<"child1 constructor"<<endl;
    }
};

class child2 : public parent{
public:
    child2(){
        cout<<"child2 constructor"<<endl;
    }
};
int main(){
    child1 c1;
    child2 c2;
}