#include<iostream>
using namespace std;

class A{
public:
    int x;

    void incX(){
        x++;
    }
};

int main(){
    A obj;

    obj.x=0;
    cout<<obj.x<<endl;    // 0

    obj.incX();
    cout<<obj.x<<endl;    // 1
}