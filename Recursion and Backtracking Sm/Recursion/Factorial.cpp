#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){

    // cout<<factorial(5)<<endl;

    cout<<"n: ";
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        cout<<factorial(i)<<" ";
    }

    return 0;
}