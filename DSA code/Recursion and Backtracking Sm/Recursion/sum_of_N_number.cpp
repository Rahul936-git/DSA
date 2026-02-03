#include<bits/stdc++.h>
using namespace std;

int sum(int n){   // n==5

    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){

    int n;
    cout<<"n: ";
    cin>>n;

    cout<<"sum: "<<sum(n);

    return 0;
}