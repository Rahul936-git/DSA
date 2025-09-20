class Solution {   // O(n* 2^n)
public:

    void getAllSubset(vector<int>& nums,vector<int>ans,int i,vector<vector<int>>&allSubSet){
        if(i==nums.size()){
            allSubSet.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        getAllSubset(nums,ans,i+1,allSubSet);

        // backtrack
        ans.pop_back();
        getAllSubset(nums,ans,i+1,allSubSet);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allSubSet;

        vector<int>ans;

        getAllSubset(nums,ans,0,allSubSet); 

        return allSubSet;
    }
};