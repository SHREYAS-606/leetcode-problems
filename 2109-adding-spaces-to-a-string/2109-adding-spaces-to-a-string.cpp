class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size();
        int m=spaces.size();
        string ans="";
        int space=0;
        for(int i=0;i<n;i++){
            if(space<m && i==spaces[space]){
                ans+=' ';
                space++;
            }
            ans+=s[i];
        }
        return ans;
        
    }
};