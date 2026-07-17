class Solution {
public:
    int vowelConsonantScore(string s) {
        set<char> st={'a','e','i','o','u'};
        int vowC=0;
        int consC=0;
        for(char x:s){
            if(st.find(x)!=st.end()){
                vowC++;
            }else if(isalpha(x)){
                consC++;
            }
        }
        if(consC)return floor(vowC/consC);
        return 0;
        
    }
};