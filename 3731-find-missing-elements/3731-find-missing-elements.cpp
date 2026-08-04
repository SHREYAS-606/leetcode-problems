class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int x:nums){
            st.insert(x);
            if(x>mx){
                mx=x;
            }
            if(x<mn){
                mn=x;
            }
        }
        vector<int> ans;
        for(int i=mn+1;i<mx;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};