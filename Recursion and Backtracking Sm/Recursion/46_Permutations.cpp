class Solution {
public:

    void getperm(vector<int>&nums,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++){   // i=idx+1
            swap(nums[idx],nums[i]);
            getperm(nums,ans,idx+1);   // base case hit

            swap(nums[idx],nums[i]);  // backtracking
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getperm(nums,ans,0);

        return ans;
    }
};