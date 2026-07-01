class Solution {
public:
    string greatestLetter(string s) {
        string ans="";
        set<char> st;
        for(char x:s){
            st.insert(x);
        }
        for(char x:st){
            if(islower(x) && st.find(toupper(x))!=st.end() && toupper(x)>ans[0]){
                  ans=toupper(x);
            }
        }
        return ans;
    }
};