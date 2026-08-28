class Solution {
   
public:
    void rec(int i,vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        rec(i+1,nums,ans,temp);
        temp.pop_back();
       rec(i+1,nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        rec(0,nums,ans,temp);
        return ans;
        
    }
};