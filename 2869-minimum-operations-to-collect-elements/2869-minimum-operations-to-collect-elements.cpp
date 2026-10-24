class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> st;
        int n=nums.size();
         int l=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<=k){
                st.insert(nums[i]);
            }
            l++;
            if(st.size()==k){
                break;
            }

        }
        return l;

    }
};