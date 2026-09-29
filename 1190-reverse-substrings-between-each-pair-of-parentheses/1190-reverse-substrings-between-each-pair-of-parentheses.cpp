class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                string sp="";
                while(st.top()!="("){
                    sp=st.top()+sp;
                    st.pop();
                }
                st.pop();
                reverse(sp.begin(),sp.end());
                st.push(sp);
            }else{
                string p="";
                p+=s[i];
                st.push(p);
            }
        }
        string ans="";
        while(!st.empty()){
             ans=st.top()+ans;
             st.pop();
        }
        
        
        
        return ans;
        
    }
};