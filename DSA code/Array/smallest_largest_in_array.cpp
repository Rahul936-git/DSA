#include<bits/stdc++.h>
using namespace std;

int main(){

    int nums[]={34,56,23,-23,9};
    int size = sizeof(nums)/sizeof(nums[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for(int i=0;i<size;i++){

        if(nums[i] < smallest){
            smallest = nums[i];
            minIndex = i;
        } 

        // smallest = min(nums[i],smallest);

        if(nums[i] > largest){
            largest = nums[i];
            maxIndex = i;
        }

        // largest = max(nums[i],largest);
    }

    cout<<"smallest: "<<smallest<<" index: "<<minIndex<<endl;
    cout<<"largest: "<<largest<<" index: "<<maxIndex<<endl;

    return 0;
}