#include<iostream>
using namespace std;

class Encap{
    private:
    int age;

    public:
    string name;
};

main(){
    Encap E;
    E.age=23;
    E.name="Ankit";
    cout<<E.age<<" "<<E.name;     // int Encap::age' is private within this context
}


// In above we do access age bacause it is private
