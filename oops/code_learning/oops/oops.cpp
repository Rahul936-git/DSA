#include<iostream>
using namespace std;

class person{

    private:
    string name;
    int age;
    string address;

    public:
    void input(){
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Name: ";
        cin>>name;
        cout<<"Address: ";
        cin>>address;
    }

    void show(){
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address "<<address<<endl;
    }

};

main(){
    person ankush,ankit,rohit;

    ankush.input();
    ankush.show();

    ankit.input();
    ankit.show();

    rohit.input();
    rohit.show();
}