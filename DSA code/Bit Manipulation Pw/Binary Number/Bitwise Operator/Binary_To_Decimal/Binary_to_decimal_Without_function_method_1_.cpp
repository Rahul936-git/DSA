#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Binary: ";
    int n;
    cin>>n; 

    int ans = 0;
    int multiByTwo = 1;

    while(n>0){

        int last_dig=n%10;
        ans += last_dig * multiByTwo;
        multiByTwo *= 2;
        n/=10;
    }

    cout<<ans<<endl;

    return 0;
}