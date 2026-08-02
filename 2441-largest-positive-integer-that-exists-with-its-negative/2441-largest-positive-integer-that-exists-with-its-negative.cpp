class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> st;
        int lar=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=-1*nums[i];
            if(st.find(k)!=st.end()){
                  lar=lar>abs(k)?lar:abs(k);
            }
            st.insert(nums[i]);
        }
        return lar;
        
    }
};