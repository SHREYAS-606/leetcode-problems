class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int count=0;
        for(int x:nums){
            count+=mpp[k+x];
            count+=mpp[x-k];
            mpp[x]++;
        }
        return count;
    }
};