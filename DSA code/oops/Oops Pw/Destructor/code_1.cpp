#include<iostream>
using namespace std;

class Rectangle{
public:
   int l;
   int b;

Rectangle(){
    l=0;
    b=0;
}

Rectangle(int x, int y){
    l=x;
    b=y;
}

Rectangle(Rectangle &r){
    l=r.l;
    b=r.b;
}

~Rectangle(){
    cout<<"Destructor is called"<<endl;
}

};

int main(){

    Rectangle *r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;
    Rectangle *r2 = new Rectangle(3,4);
    cout << r2->l << " " << r2->b << endl;

    Rectangle *r3 = new Rectangle(*r2);  // Copy before delete
    cout << r3->l << " " << r3->b << endl;

    delete r2;
    delete r3;

    return 0;
}