#include<iostream>
using namespace std;

class Encap{
    public:
    int age;
    string name;
};

int main(){
    Encap E;
    E.age= 21;
    E.name= "Nike";
    cout<<E.age<<" "<<E.name;
}