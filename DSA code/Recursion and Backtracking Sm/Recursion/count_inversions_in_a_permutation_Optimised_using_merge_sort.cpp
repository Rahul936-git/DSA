#include<bits/stdc++.h>
using namespace std;

    int merge(vector<int>&arr,int start,int mid,int end){

        vector<int>ans;

        int i=start;
        int j=mid+1;

        int inversionCount=0;

        while(i<=mid && j<=end){

            if(arr[i] <= arr[j]){
                ans.push_back(arr[i]);
                i++;
            }
            else{
                ans.push_back(arr[j]);
                j++;
                inversionCount += (mid-i+1);
            }
        }
        while(i<=mid){
            ans.push_back(arr[i]);
            i++;
        }

        while(j<=end){
            ans.push_back(arr[j]);
            j++;
        }

        for(int k=0;k<ans.size();k++){
            arr[k+start]= ans[k];
        }

        return inversionCount;
    }

    int mergeCount(vector<int>&arr,int start,int end){

        if(start < end){                   //     if(start >= end) return 0;   // <-- base case

            int mid=start+(end-start)/2;

            int leftInversion= mergeCount(arr,start,mid);
            int rightInversion= mergeCount(arr,mid+1,end);

            int invCount= merge(arr,start,mid,end);

            return leftInversion + rightInversion + invCount;
        }
        return 0;
    }

int main(){

    vector<int>arr={6,3,5,2,7};

    int ans= mergeCount(arr,0,arr.size()-1);
    cout<<ans<<endl;

    return 0;
}