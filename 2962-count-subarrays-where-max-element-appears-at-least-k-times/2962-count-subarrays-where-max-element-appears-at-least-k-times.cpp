class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        int r=0;
        int l=0;
        long long ans=0;
        int count=0;
        while(r<n){
            if(nums[r]==maxi){
                count++;
            }
            while(count>=k){
                if(nums[l]==maxi){
                    count--;
                }
                l++;
            }
            ans+=l;
            r++;
        }
        return ans;

    }
};