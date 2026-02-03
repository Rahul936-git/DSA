#include<iostream>
using namespace std;

void Fun(){
    int x=0; // initialisation again and again in every function call
    cout<<"x: "<<x<<endl; 
    x++;
}

int main(){
    Fun();  // x: 0
    Fun();  // x: 0
    Fun();  // x: 0
}