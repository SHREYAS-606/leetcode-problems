class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int l=1;
        int maxi=1;
        for(int i=0;i<n-1;i++){
             if(nums[i+1]>nums[i]){
                l++;
                maxi=max(maxi,l);
             }else{
                l=1;
             }
        }
        return maxi;
    }
};