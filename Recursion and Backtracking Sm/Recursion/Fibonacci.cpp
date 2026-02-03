#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n){
    if(n==1 or n==0){
        return n;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

int main(){

    cout<<"n: ";
    int n;
    cin>>n;

    // cout<<Fibonacci(n);

    for(int i=0;i<=n;i++){
        cout<<Fibonacci(i)<<" ";
    }

    return 0;
}