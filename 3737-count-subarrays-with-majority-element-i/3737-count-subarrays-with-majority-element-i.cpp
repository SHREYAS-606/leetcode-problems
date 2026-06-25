class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int freq=0;
            int len=0;
            for(int j=i;j<n;j++){
                len++;
                if(nums[j]==target){
                   freq++;
                }
                if(freq>len/2){
                    ans++;
                }

            }
        }
        return ans;
        
    }
};