#include<iostream>
using namespace std;

class base1{
    private:
    int a,b,c;
    public:
    void input(){
        // enter value of Base 1 class
        cout<<"enter value of Base 1 class a: ";
        cin>>a;
        cout<<"enter value of Base 1 class b: ";
        cin>>b;
    }

    void show(){
        c=a+b;
        cout<<"sum: "<<c<<endl;
    }
};

class base2{
    private:
    int a,b,c;
    public:
    void input1(){
        // enter value of base 2 class
        cout<<"enter value of base 2 class a: ";
        cin>>a;
        cout<<"enter value of base 2 class b: ";
        cin>>b;
    }
    void show1(){
        c=a-b;
        cout<<"subtraction: "<<c<<endl;
    }
};

class derive:public base1, public base2{
    private:
    int a,b,c;

    public:
    void input2(){
        // enter value of derive class
        cout<<"enter value of derive class a: ";
        cin>>a;
        cout<<"enter value of derive class b: ";
        cin>>b;
    }
    void show2(){
        c=a*b;
        cout<<"Multiplication: "<<c<<endl;
    }
};


int main(){
    // first we access base class memeber function from base class object
    base1 ob;
    ob.input();
    ob.show();

    base2 ob1;
    ob1.input1();
    ob1.show1();

}