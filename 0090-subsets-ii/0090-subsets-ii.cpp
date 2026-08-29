class Solution {
    set<vector<int>> st;
    vector<int> temp;
public:
    void rec(int i,vector<int> &nums){
          if(i>=nums.size()){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        rec(i+1,nums);
        temp.pop_back();
        rec(i+1,nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        rec(0,nums);
        for(vector<int> x:st){
            ans.push_back(x);

        }
        return ans;
        
    }
};