class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int n=s.size();
        string ans="";
        int is=0;
        for(int i=0;i<n;i++){
            if(is!=1 && st.empty() && s[i]=='('){
                is=1;
            }else if( is!=0 && st.empty() && s[i]==')'){
                is=0;
            }else if(s[i]=='('){
                st.push(s[i]);
                ans+=s[i];
            }else{
                ans+=s[i];
                st.pop();
            }
            
        }
        return ans;

        
    }
};