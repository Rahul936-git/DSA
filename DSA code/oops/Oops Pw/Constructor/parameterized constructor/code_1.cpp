#include<iostream>
using namespace std;

class Rectangle{
public:
   int l;
   int b;

Rectangle(int x, int y){
    l=x;
    b=y;
}
};

int main(){

    Rectangle r2(3,5);
    cout<<r2.l<<" "<<r2.b<<endl;

    return 0;
}