#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){

    int a=0;
    int b=n-1;
        
    // while(a<b){
    //     swap(arr[a],arr[b]);
    //     a++;
    //     b--;
    // }

    for(int i=0,j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);

    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}