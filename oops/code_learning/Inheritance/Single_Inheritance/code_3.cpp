#include<iostream>
using namespace std;

class base{
    // private:
    protected: // make it protected from private so it can be access by derive class
    int a,b;

    public:
    void input(){

        cout<<"enter a: ";
        cin>>a;
        cout<<"enter b: ";
        cin>>b;
    }

    // void show(){
    //     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    // }
};

class derive:public base{

    private:
    int m,n;

    public:
    void getdata(){

        cout<<"enter m: ";
        cin>>m;
        cout<<"enter n: ";
        cin>>n;
    }

    void display(){
        cout<<"m: "<<m<<" "<<"n: "<<n<<endl;
        cout<<"a: "<<a<<" "<<"b: "<<b<<endl; // from derive class memeber function to access base class data memeber
    }
};

int main(){
    base be;
    derive dr;

    // be.input();
    // be.show(); 

    dr.input();
    // dr.show();

    dr.getdata();
    dr.display();
}