class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
       
        
       for(int i=0;i<s.size();i++){
          char t=s[i];
            switch(t){
               case '{':
               case '(':
               case '[':st.push(t);
                        break;
               case '}':if(st.empty() || st.top()!='{')return false;
                        st.pop();
                        break; 

               case ')':if(st.empty() || st.top()!='(')return false;
                        st.pop();
                        break;
               case ']':if(st.empty() || st.top()!='[')return false;
                        st.pop();
                        break;
            }
           
        }
       return st.empty();
        
    }
};