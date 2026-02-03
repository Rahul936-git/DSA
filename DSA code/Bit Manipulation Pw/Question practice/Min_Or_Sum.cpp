#include<bits/stdc++.h>
using namespace std;

void MinOrSum(int a){

    int x=0;

    for(int i=0;i<a;i++){

        int y;
        cin>>y;
        x|=y;  // x=x|y;
    }

    cout<<x<<endl;
}

int main(){

    int n;
    cin>>n;

    while(n--){
        int a;
        cin>>a;
        MinOrSum(a);
    }

    return 0;
}