class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(char x:s){
            if(x=='('){
                st.push(0);
            }else{
                int k=st.top();
                st.pop();
                if(k==0){
                    k=1;
                }else{
                    k=k*2;
                }
                st.top() += k; 
            }
        }
        return st.top();
        

        
    }
};