class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        int m=operations.size();
        for(int i=0;i<m;i++){
            nums[mpp[operations[i][0]]]=operations[i][1];
            int ind=mpp[operations[i][0]];
            mpp.erase(operations[i][0]);
            mpp[operations[i][1]]=ind;
        }
        return nums;
        
    }
};