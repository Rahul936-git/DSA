#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size,int target){  // Arrays already behave like pointers when passed to functions.

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[]={1,3,4,678,5,5447,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<linearSearch(arr,size,678);

    return 0;
}