class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> ans;
    int n=nums.size();
    int less=0;
    int eq=0;
    for(int i=0;i<n;i++){
        if(nums[i]==target){
           eq++;
        }else if(nums[i]<target){
            less++;
        }

    }
    for(int i=less;i<eq+less;i++){
        ans.push_back(i);
    }
    return ans;
        
    }
};