// way to access private function 

#include<iostream>
using namespace std;

class Encaps{

private:
    int age;
    void message(){
        cout<<"Hello";
    }

public:
    string name;

    void setValue(int a){
        age=a;
        cout<<age<<endl;
        message();
    }
};

main(){
    Encaps E;
    E.name="Ankit";
    cout<<E.name<<endl;
    E.setValue(21);
    // E.message();    // this function already call inside other function so no need to call here
}




