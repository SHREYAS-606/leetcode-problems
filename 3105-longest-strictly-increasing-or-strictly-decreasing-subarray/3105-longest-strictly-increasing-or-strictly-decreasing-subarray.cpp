class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxd=INT_MIN;
        int maxi=INT_MIN;
        int counti=0;
        int countd=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==0){
                counti++;
                countd++;
            }else{
                if(nums[i-1]<nums[i]){
                    counti++;
                }else{
                    counti=1;
                }
                if(nums[i-1]>nums[i]){
                    countd++;
                }else{
                    countd=1;
                }
              
            }
              maxi=max(counti,maxi);
                maxd=max(countd,maxd);

        }
        return max(maxi,maxd);
        
    }
};