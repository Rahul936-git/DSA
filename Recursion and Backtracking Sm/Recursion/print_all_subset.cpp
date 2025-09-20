#include<bits/stdc++.h>
using namespace std;

    void printAllSubset(vector<int>&arr,vector<int>ans,int i){

        if(i==arr.size()){   // base case
            for(int val:ans){
                cout<<val<<" ";
            }
            cout<<endl;
            return;
        }
        // include
        ans.push_back(arr[i]);
        printAllSubset(arr,ans,i+1);

        // exclude
        ans.pop_back();   // backtrack
        printAllSubset(arr,ans,i+1);

    }

int main(){

    vector<int>arr={1,2,3};
    vector<int>ans;

    printAllSubset(arr,ans,0);

    return 0;
}

// tc: 2^n * n

https://leetcode.com/problems/subsets/

