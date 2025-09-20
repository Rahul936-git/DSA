#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){
    if(n==1){
        cout<<"1"<<" ";
    }
    else{
        cout<<n<<" ";
        printNumber(n-1);
    }
}

int main(){
    printNumber(100);
    return 0;
}