#include<iostream>
using namespace std;

class base{
    // private:
    protected:
    int a,b;
    public:
    void input(){
        cout<<"enter value for base class a: ";
        cin>>a;
        cout<<"enter value for base class b: ";
        cin>>b;
    }

    void show(){
        cout<<"Sum: "<<a+b<<endl;
    }
};

class derive1:public base{
    private:
    int n1;
    public:
    void input1(){
        cout<<"enter value for derive 1 class n1: ";
        cin>>n1;
    }
    void show1(){
        cout<<n1<<endl;
    }
};

class derive2:public base{
    private:
    int n2;
    public:
    void input2(){
        cout<<"enter value for derive 2 class n2: ";
        cin>>n2;
    }
    void show2(){
        cout<<n2<<" "<<"sum: "<<a+b<<endl;
    }
};

int main(){

    derive1 ob1;
    derive2 ob2;

// we take input inside base class and print it in derive2
    ob2.input();
    ob2.input2();
    ob2.show2();
}
