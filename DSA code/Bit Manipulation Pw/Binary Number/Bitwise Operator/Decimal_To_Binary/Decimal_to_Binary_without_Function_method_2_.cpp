#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Decimal : ";
    int n;
    cin>>n;

    int multiple_by_ten = 1;
    int store = 0;

    while(n>0){
        int divided_by_two = n%2;
        store += divided_by_two * multiple_by_ten ;
        multiple_by_ten *= 10;
    n /= 2;
    }

    cout<<store<<endl;
    

    return 0;
}