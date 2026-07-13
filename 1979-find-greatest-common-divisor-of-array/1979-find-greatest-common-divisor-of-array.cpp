class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int x:nums){
            if(x>maxi){
                maxi=x;
            }
            if(x<mini){
                mini=x;
            }
        }
        while(mini!=0){
            int r=maxi%mini;
            maxi=mini;
            mini=r;
        }
        return maxi;
        
    }
};