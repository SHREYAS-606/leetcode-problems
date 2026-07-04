class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        int ans=0;
        for(auto &it:mpp){
            if(it.second==1){
                ans+=it.first;
            }
        }
        return ans;
    }
};