// here we access base class member function by derive class object 
// ( derive class ke object se base class ke member function ko access karne ka kosis karte hai )

#include<iostream>
using namespace std;

class base{
    private:
    int a,b;

    public:
    void input(){

        cout<<"enter a: ";
        cin>>a;
        cout<<"enter b: ";
        cin>>b;
    }

    void show(){
        cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    }
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
    }
};

// int main(){
//     base be;
//     derive dr;

//     be.input();
//     be.show(); 

//     dr.getdata();
//     dr.display();
// }

int main(){
    base be;
    derive dr;

    // be.input();
    // be.show(); 

    dr.input();
    dr.show();

    dr.getdata();
    dr.display();
}

