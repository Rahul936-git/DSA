#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Decimal : ";
    int n;
    cin>>n;

    string store="";

    while(n>0){
        int divided_by_two = n%2;
        store += to_string(divided_by_two);   // // store += (divided_by_two + '0');
        n /= 2;

        reverse(store.begin(),store.end());
    }

    cout<<store<<endl;
    

    return 0;
}