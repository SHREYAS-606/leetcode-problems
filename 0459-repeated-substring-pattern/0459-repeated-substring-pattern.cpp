class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled=s+s;
        string ans=doubled.substr(1,doubled.size()-2);
        return ans.find(s)!=string::npos;
        
    }
};