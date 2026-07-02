class Solution {
public:
    int digitSum(int k){
        int sum=0;
        while(k>0){
            sum+=k%10;
            k/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==digitSum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};