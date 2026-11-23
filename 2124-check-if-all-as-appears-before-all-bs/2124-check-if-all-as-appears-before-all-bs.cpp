class Solution {
public:
    bool checkString(string s) {
        int is=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(is && s[i]=='a'){
                return false;
            }
            if(s[i]=='b'){
                is=1;
            }
        }
        return true;
        
    }
};