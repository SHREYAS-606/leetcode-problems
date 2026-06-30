class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
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
            if(left[i]==right[i]){
                return i;
            }
        }
        return -1;
        
    }
};