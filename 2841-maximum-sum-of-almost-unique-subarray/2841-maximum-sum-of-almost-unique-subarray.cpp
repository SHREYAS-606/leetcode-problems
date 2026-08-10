class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int r=0;
        int l=0;
        long long maxi=0;
        long long sum=0;
        while(r<n){
               mpp[nums[r]]++;
               sum+=nums[r];
               int p=r-l+1;
               if(p==k){
                if(mpp.size()>=m){
                    maxi=maxi>sum?maxi:sum;
                }
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                sum-=nums[l];
                l++;
               }
               r++;
        }
        return maxi;
        
    }
};