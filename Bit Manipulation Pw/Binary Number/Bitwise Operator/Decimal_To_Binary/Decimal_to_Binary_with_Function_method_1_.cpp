#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Decimal_to_integer(int n){

    string store="";

    while(n>0){

        int divided_by_two = n%2;
        store += to_string(divided_by_two);   // // store += (divided_by_two + '0');
        n /= 2;

        reverse(store.begin(),store.end());
    }

    return store;
}

int main(){

    cout<<"Decimal : ";
    int n;
    cin>>n;

    cout<<Decimal_to_integer(n)<<endl;
    

    return 0;
}