//  we do not access private function of class


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
    }
};

main(){
    Encaps E;
    E.name="Ankit";
    cout<<E.name<<endl;
    E.setValue(21);
    E.message();    // 'void Encaps::message()' is private within this context
}

// way to access private function 


