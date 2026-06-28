class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        int leftSum=0;
        int rightSum=0;
        for(int i=0;i<n;i++){
            left[i]=leftSum;
            leftSum+=nums[i];
            right[n-i-1]=rightSum;
            rightSum+=nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            left[i]=abs(left[i]-right[i]);
        }
        return left;
    }
};