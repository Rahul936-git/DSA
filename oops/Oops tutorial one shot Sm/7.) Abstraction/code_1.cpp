#include<iostream>
using namespace std;

class Shape { // abstract class
public:
    virtual void draw() = 0;  // pure virtual function
};

class circle: public Shape{
public:
    void draw(){
        cout<<"circle is drawing..."<<endl;
    }
};

int main(){
    // Shape s1;    //  cannot declare variable 's1' to be of abstract type 'Shape'
    // s1.draw();

    circle c1;
    c1.draw();
}