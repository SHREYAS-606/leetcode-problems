class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> st;
        int max=INT_MIN;
        int min=INT_MAX;
        for(int x:nums){
            st.insert(x);
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        vector<int> ans;
        for(int i=min+1;i<max;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};