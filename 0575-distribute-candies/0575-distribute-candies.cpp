class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(int x: candyType){
            st.insert(x);
        }
        int n=candyType.size();
        int a=n/2;
        int b=st.size();
        int ans=min(b,a);
        return ans;
        
    }
};