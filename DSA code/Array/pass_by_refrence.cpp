#include<bits/stdc++.h>
using namespace std;

void ChangeArr(int arr[],int size){

    cout<<"in function"<<endl;

    for(int i=0;i<size;i++){
        arr[i] = 2*arr[i];
    }
}

int main(){

    int arr[]={1,2,4,5,6,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    ChangeArr(arr,size);

    cout<<"in main"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}