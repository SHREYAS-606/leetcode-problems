class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if((i+2)<n){
                double c=nums[i]+nums[i+2];
                if(c==(double)nums[i+1]/2)ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};