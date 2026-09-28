class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int n=s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            if(st.size()!=0 && s[i]==')'){
                st.pop();
            }
            int k=st.size();
            maxi=max(maxi,k);
        }
        return maxi;
        
    }
};