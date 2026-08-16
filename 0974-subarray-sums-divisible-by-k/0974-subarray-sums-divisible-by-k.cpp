class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int prefix=0;
        int cnt=0;
        for(int  i=0;i<n;i++){
            prefix+=nums[i];
            int r=prefix%k;
            if(r<0){
                r+=k;
            }
            if(mpp.find(r)!=mpp.end()){
                cnt+=mpp[r];
            }
           mpp[r]++;
            
        }
        return cnt;

        
    }
};