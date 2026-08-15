class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int y=0;
        int notZero=0;
        for(int x:nums){
            y^=x;
            if(y!=0){
                notZero=1;
            }
        }
        if(y!=0)return n;
        if(notZero) return n-1;
        return 0; 

    }
};