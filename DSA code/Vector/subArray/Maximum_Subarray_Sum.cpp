#include<bits/stdc++.h>
using namespace std;

int main(){     // O(n^2)

    int n=5;
    int arr[5]={1,2,3,-4,5};

    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
         
        int currSum = 0;

        for(int j=i;j<n;j++){

            currSum += arr[j];
            maxSum = max(currSum,maxSum);
        }
    }

    cout<<"Maximum Subarray Sum : "<<maxSum<<endl;

    return 0;
}