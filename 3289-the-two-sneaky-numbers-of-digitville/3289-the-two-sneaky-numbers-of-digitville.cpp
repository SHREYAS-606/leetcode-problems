class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int ind=nums[i]%n;
            if(nums[ind]>=n){
                ans.push_back(ind);
            }else{
                nums[ind]+=n;
            }
        }
        return ans;
        
    }
};