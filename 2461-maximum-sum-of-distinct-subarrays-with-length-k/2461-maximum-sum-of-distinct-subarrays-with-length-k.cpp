class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int r=0;
        int l=0;
        long long maxi=0;
        long long sum=0;
        while(r<n){
            int p=r-l+1;
            sum+=nums[r];
            mpp[nums[r]]++;
            if(p==k){
                if(mpp.size()==k){
                     maxi=maxi>sum?maxi:sum;
                }
                
                mpp[nums[l]]--;
                sum-=nums[l];
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                
                l++;
            }
            r++;
        }
        return maxi;
        
    }
};