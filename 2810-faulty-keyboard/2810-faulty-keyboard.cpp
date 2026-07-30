class Solution {
public:
    string finalString(string s) {
        int n=s.size();
        string st="";
        for(int i=0;i<n;i++){
            if(s[i]=='i'){
                reverse(st.begin(),st.end());
                continue;
            }
            st+=s[i];
        }
        return st;
        
    }
};