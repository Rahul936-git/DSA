#include<iostream>
using namespace std;

class ABC{
public:
    ABC(){
        cout<<"Constructor"<<endl;
    }

    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    if(true){
        ABC obj;
    }
    cout<<"end of main function"<<endl;      // Constructor
}                                            // Destructor
                                             // end of main function
