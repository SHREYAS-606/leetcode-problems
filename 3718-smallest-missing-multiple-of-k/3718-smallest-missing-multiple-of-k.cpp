class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        vector<int> freq(101,0);
        int mini=INT_MAX;

        for(int x:nums){
            if(x%k==0){
                freq[(x/k)-1]++;
            }

        }
        for(int i=0;i<101;i++){
            if(freq[i]==0){
                return k*(i+1);
            }
        }
        return -1;
    }
};