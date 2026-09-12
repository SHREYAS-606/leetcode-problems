class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int r=0;
        int l=0;
        int mini=INT_MAX;
        while(r<n){
            int len=r-l+1;
            if(len==k){
                mini=min(mini,nums[r]-nums[l]);
                l++;
            }
            r++;

        }
        return mini;

        
    }
};