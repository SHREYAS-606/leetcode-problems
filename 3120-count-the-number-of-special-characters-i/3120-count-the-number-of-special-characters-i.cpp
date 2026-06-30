class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> st;
        int count=0;
        for(char ch:word){
            st.insert(ch);
        }
        for(char c:st){
                if (islower(c) && st.count(toupper(c))) {
                count++;
            }
        }
        return count;
        
    }
};