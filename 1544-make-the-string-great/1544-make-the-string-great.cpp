class Solution {
public:
    string makeGood(string s) {
        string ans="";
        int n=s.size();
        if(n==1)return s;
        int k=0;
        for(int i=0;i<n;i++){
           
              if(i>0 && k!=0 && s[i]!=ans[k-1] && (s[i]==toupper(ans[k-1])|| ans[k-1]==toupper(s[i]))){
                ans.pop_back();
                k--;
                continue;
              }
              ans+=s[i];
              k++;
        }
        return ans;
        
    }
};