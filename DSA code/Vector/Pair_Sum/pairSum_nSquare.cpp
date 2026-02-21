#include<bits/stdc++.h>
using namespace std;

vector<int>pairSum(vector<int>arr,int target,int n){

    vector<int>ans;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){

    vector<int>arr = {3,5,6,87,3,6,8,5,3,7,9,56,5};
    int target = 101;
    int n=arr.size();

    vector<int>result = pairSum(arr,target,n);

    // for(int i:result){
    //     cout<<i<<" ";
    // }

    if(result.size()==2){
        cout<<result[0]<<" "<<result[1]<<endl;
    }
    else cout<<"not found";

    return 0;
}