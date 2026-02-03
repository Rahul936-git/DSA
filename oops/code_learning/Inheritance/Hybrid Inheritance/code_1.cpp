#include<iostream>
using namespace std;

class A{

    int n;
    public:

    void input(){
        cout<<"enter value n: ";
        cin>>n;
    }

    void show(){
        cout<<n<<endl;
    }
};

class B:public A{

};

class C:public A{

};

class D:public B,public C{

};

int main(){

    A ob;
    B ob1;
    C ob2;
    D ob3;

    ob.input();
    ob.show();

    ob1.input();
    ob1.show();

    ob2.input();
    ob2.show();

    ob3.input();  // 'input' is ambiguous // because compiler is confused to path to A 
    ob3.show();
}

