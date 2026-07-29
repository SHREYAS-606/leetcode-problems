class Solution {
public:
   int countSubArray(vector<int> &nums,int goal){
        if(goal<0)return 0;
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>goal){
                sum-=nums[l]%2;
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;

    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count1;
        int count2;
        count1=countSubArray(nums,k);
        count2=countSubArray(nums,k-1);
        return count1-count2;
    }
};