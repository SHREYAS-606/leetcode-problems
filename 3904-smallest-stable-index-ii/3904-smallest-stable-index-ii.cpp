class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> sumax(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
             maxi=max(maxi,nums[i]);
             sumax[i]=maxi;
        }
        int mini=INT_MAX;
        int ans=-1;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            int p=sumax[i]-mini;
            if(p<=k){
                ans=i;
            }
        }
        return ans;
    }
};