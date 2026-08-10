class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int sum;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                int d=j-i+1;
                if(sum>0 && d>=l && d<=r){
                    mini=mini<sum?mini:sum;
                }

            }
        }
        
        if(mini==INT_MAX)return  -1;
        return mini;
    }
};