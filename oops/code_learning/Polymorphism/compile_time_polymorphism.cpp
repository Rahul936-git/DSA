#include<iostream>
using namespace std;

void showInfo(int age){
    cout<<age<<endl;
}

void showInfo(string name){\
    cout<<name<<endl;
}

void showInfo(double salary){
    cout<<salary<<endl;
}

main(){
    showInfo("Rahul");
    showInfo(55000.5);
    showInfo(23);
}