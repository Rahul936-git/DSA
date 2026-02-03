#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Binary_to_decimal(string n){

    int multiple_of_two = 1;
    int store = 0;

    for(int i=n.size()-1;i>=0;i--){
        if(n[i]=='1'){
            store += multiple_of_two;
        }
        multiple_of_two *= 2;
    }

    return store;
}

int main(){
    cout<<"Binary: ";
    string n;
    cin>>n; 

    cout << Binary_to_decimal(n) << endl;

    return 0;
}