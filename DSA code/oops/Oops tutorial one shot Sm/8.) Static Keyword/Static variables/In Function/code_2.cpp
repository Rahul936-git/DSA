#include<iostream>
using namespace std;

void Fun(){
    static int x=0; // initialisation once for every function call // not store in stack
    cout<<"x: "<<x<<endl; 
    x++;
}

int main(){
    Fun();  // x: 0
    Fun();  // x: 1
    Fun();  // x: 2
}