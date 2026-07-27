class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int big=nums[0];
        int sbig=INT_MIN;
        for(int i=1;i<n;i++){
            if(nums[i]>big){
                sbig=big;
                big=nums[i];
            }else if(nums[i]>sbig){
                sbig=nums[i];
            }
        }
        return (big-1)*(sbig-1);
        
    }
};