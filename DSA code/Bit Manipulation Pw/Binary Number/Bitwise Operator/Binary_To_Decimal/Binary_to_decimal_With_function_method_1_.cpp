#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Binary_to_decimal(int n){

    int ans = 0;
    int multiByTwo = 1;

    while(n>0){

        int last_dig=n%10;
        ans += last_dig * multiByTwo;
        multiByTwo *= 2;
        n/=10;
    }

    return ans;
}

int main(){
    cout<<"Binary: ";
    int n;
    cin>>n; 

    cout<<Binary_to_decimal(n)<<endl;

    return 0;
}