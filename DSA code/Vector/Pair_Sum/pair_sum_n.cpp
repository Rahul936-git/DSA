#include<bits/stdc++.h>
using namespace std;

vector<int>pairSum(vector<int>arr,int target,int n){

    sort(arr.begin(),arr.end());

        vector<int>ans;
        
        int i=0, j=n-1;

        while(i<j){
            if((arr[i]+arr[j]) > target){
                j--;
            }
            else if((arr[i]+arr[j]) < target){
                i++;
            }
            else{
                ans.push_back(i);
                ans.push_back(j);
                break;
            } 
        }
        return ans;
}

int main(){

    vector<int>arr = {3,5,6,87,3,6,8,5,3,7,9,56,5};
    int target = 61;
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