class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        long long count=0;
        for(int i=0;i<n;i++){
            count+=(i-mpp[nums[i]-i]);
            mpp[nums[i]-i]++;
        }
        return count;
        
    }
};