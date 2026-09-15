class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int r=0;
        int l=0;
        unordered_map<int,int> mpp;
        int sum=0;
        int maxi=0;
        int len;
        while(r<n){
            sum+=nums[r];
            mpp[nums[r]]++;
            
            while(r-l+1!=mpp.size()){
                mpp[nums[l]]--;
                sum=sum-nums[l];
                if(mpp[nums[l]]==0)mpp.erase(nums[l]);
                
                l++;
            }
            maxi=max(maxi,sum);
            r++;
             
        }
        return maxi;
    }
};