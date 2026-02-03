#include <iostream>
using namespace std;

class Car{
    bool startEngine;  // by default false
    public:
    Car():startEngine(false){}  // constructor
    void Start(){
        // startEngine=true;
        cout<<"Engine started: )"<<endl;
    }
    void drive(){
        if(startEngine){
            cout<<"you are ready to drive"<<endl;
        }
        else{
            cout<<"can't drive"<<endl;
        }
    }
};

main(){
    Car c;
    c.Start();
    c.drive();
}

