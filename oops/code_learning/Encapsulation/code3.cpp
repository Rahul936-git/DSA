// for to access private Attribute we make function 

#include<iostream>
using namespace std;

class Encaps{
    private:
    int age;

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
    
}
