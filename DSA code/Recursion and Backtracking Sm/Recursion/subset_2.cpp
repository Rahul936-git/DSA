class Solution {
public:

    void getPrintAllSubset(vector<int>&nums,vector<vector<int>>&allSubSet,int i,vector<int>ans){
        if(i==nums.size()){
            allSubSet.push_back(ans);
            return;
        }

        // include
        ans.push_back(nums[i]);
        getPrintAllSubset(nums,allSubSet,i+1,ans);

        // exclude
        ans.pop_back();

        int idx= i+1;
        while(idx < nums.size() && nums[idx]==nums[idx-1]) idx++;

        getPrintAllSubset(nums,allSubSet,idx,ans);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> allSubSet;
        vector<int>ans;

        getPrintAllSubset(nums,allSubSet,0,ans);

        return allSubSet;
    }
};