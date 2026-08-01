class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<double> st;
        int l=0;
        int r=n-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            st.insert(sum/2.0);
            
            l++;
            r--;
        }
        return st.size();
        
    }
};