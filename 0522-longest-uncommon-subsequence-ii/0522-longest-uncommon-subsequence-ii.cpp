class Solution {
public:
    bool check(string s,string t){
        int m=s.size();
        int n=t.size();
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }
        if(j==n){
            return true;
        }
        return false;

    }
    int findLUSlength(vector<string>& strs) {
        int n=strs.size();
        int len=-1;
        for(int i=0;i<n;i++){
            int is=1;
            for(int j=0;j<n;j++){
                if(i!=j && check(strs[j],strs[i])){
                  is=0;
                }
            }
            if(is){
               len=max(len,(int)strs[i].size());
            }
            
        }

        return len;

        
    }
};