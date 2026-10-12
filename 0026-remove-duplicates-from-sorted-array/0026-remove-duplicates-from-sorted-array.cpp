class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        int k=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]!=k){
                nums[++j]=nums[i];
                k=nums[i];
            }
            
        }
        return j+1;
        
    }
};