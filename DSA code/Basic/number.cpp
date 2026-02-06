#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=4;

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int k=0;k<i+1;k++){
            cout<<k+1;
        }

        for(int y=i;y>0;y--){
            cout<<y;
        }

        cout<<endl;
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){
            cout<<" ";
        }

        for(int k=0;k<n-i-1;k++){
            cout<<k+1;
        }

        for(int j=n-i-2;j>0;j--){
            cout<<j;
        }

        cout<<endl;
    }

    return 0;
}