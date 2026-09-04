class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int count=-1;
        int n=nums.size();
        if(n==1)return 0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                mini=min(mini,nums[j]);
            }
            if((maxi-mini)<=k){
                return i;
            }
        }
        
        return count;

        
    }
};