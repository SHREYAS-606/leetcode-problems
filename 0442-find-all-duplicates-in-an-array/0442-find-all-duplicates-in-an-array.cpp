class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=abs(nums[i])-1;
            if(nums[c]<0){
                ans.push_back(abs(nums[i]));
            }else{
                nums[c]=-nums[c];
            }
        }
        return ans;
        
    }
};