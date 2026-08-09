class Solution {
public:
    
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        for(int x:nums){
               st.insert(x);
        }
        int k=st.size();
        unordered_map<int,int> mpp;
        int r=0;
        int l=0;
        int ans=0;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()==st.size()){
                ans+=n-r;
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;


            }
            r++;


        }
        return ans;
       
        
    }
};