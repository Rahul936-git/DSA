#include<iostream>
using namespace std;

class base{
    // private:
    protected: // so derive1 class access it
    int a;
    public:
    void input(){
        cout<<"enter value of base class a:";
        cin>>a;
    }
    // void show(){                       // // this value show inside derive 1 show1 function
    //     cout<<"a:"<<a<<endl;
    // }
};

class derive1:public base{

    // private:
    protected: // so derive2 class can access it
    int b;
    public:

    void input1(){
        cout<<"enter value of Derived class b : ";
        cin>>b;
    }
    // void show1(){                        // this value show inside derive 2 show2 function
    //     cout<<"b: "<<b<<endl;
    // }
};

class derive2:public derive1{
    private:
    int c;
    public:
    void input2(){
        cout<<"enter value of Derive2 class c:";
        cin>>c;
    }
    // In derive 2 we show a,b,c we take input in derive 1 but show them in derive 2
    void show2(){
        // cout<<"c: "<<c<<endl;
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
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

    // derive2 ob2;
    // ob2.input2();
    // ob2.show2();

// derive2 object to derive1 class and base class member function access
        
       derive2 ob2;

       ob2.input();
    //    ob2.show();

       ob2.input1();
    //    ob2.show1(); 

       ob2.input2();
       ob2.show2();

}