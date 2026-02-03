#include<iostream>
using namespace std;

class base{
    private:
    int a;
    public:
    void input(){
        cout<<"enter value of base class a:";
        cin>>a;
    }
    void show(){
        cout<<"a:"<<a<<endl;
    }
};

class derive1:public base{

    private:
    int b;
    public:

    void input1(){
        cout<<"enter value of Derived class b : ";
        cin>>b;
    }
    void show1(){
        cout<<"b: "<<b<<endl;
    }
};

class derive2:public derive1{
    private:
    int c;
    public:
    void input2(){
        cout<<"enter value of Derive2 class c:";
        cin>>c;
    }
    void show2(){
        cout<<"c: "<<c<<endl;
    }
};

int main(){

// base object to base class member function access

//     base ob;
//     ob.input();
//     ob.show();

// derive1 object to derive1 class member function access

//     derive1 ob1;
//     ob1.input1();
//     ob1.show1();

// derive2 object to derive1 class member function access

//     derive2 ob2;
//     ob2.input2();
//     ob2.show2();

// derive2 object to derive1 class and base class member function access
        
       derive2 ob2;

       ob2.input();
       ob2.show();

       ob2.input1();
       ob2.show1(); 
}