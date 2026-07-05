class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
             if(nums[i]>maxi){
                maxi=nums[i];
             }
             if(nums[i]<mini){
                mini=nums[i];
             }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=mini && nums[i]!=maxi){
                cnt++;
            }
        }
        return cnt;
    }
};