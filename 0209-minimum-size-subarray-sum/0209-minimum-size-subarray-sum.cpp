class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int r=0;
        int l=0;
        long long sum=0;
        int mini=INT_MAX;
        while(r<n){
              sum+=nums[r];
              
              while(l<n && sum>=target){
                int k=r-l+1;
                mini=mini<k?mini:k;
                sum-=nums[l];
                l++;
              }
              
              r++;
        }
        if(mini==INT_MAX) return 0;
        return mini;
        
    }
};