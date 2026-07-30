class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int x:nums){
            if(x>=10)sum2+=x;
            else{
                sum1+=x;
            }
        }
        if(sum1==sum2)return false;
        return true;
        
    }
};