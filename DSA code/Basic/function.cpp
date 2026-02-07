#include<bits/stdc++.h>
using namespace std;

int factorial(int x){

    int num=1;

    for(int i=x;i>0;i--){
        num*=i;
    }

    return num;
}

int nCr(int n,int r){

    if(r>n) return 0;

    int nFact = factorial(n);
    int rFact = factorial(r);
    int nMrFact = factorial(n-r);

    return nFact/(rFact * nMrFact);
}

int main(){

    int n=6,r=3;

    cout<<nCr(n,r)<<endl;

    return 0;
}