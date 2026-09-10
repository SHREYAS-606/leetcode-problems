class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int r=0;
        int l=0;
        int zeroes=0;
        int maxi=0;
        while(r<n){
            if(nums[r]==0){
                zeroes++;
            }
            while(zeroes>1){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            maxi=max(maxi,r-l);
            r++;

        }
        return maxi;
    }
};