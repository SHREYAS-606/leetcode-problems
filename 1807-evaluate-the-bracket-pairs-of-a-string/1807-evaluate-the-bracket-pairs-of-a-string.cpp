class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=knowledge.size();
        
        unordered_map<string,string> mpp;
        for(int i=0;i<n;i++){
            
            mpp[knowledge[i][0]]=knowledge[i][1];
            
        }
        string p="";
        int k=s.size();
        string ans="";
        int is=0;

        for(int i=0;i<k;i++){
            if(s[i]==')'){
                is=0;
                if(mpp.find(p)!=mpp.end()){
                    ans+=mpp[p];
                }else{
                    ans+='?';
                }
                p="";
            }else if(is==1 || s[i]=='('){
                 is=1;
                if(s[i]!='('){
                p+=s[i];
                }
               
            }else{
                ans+=s[i];
            }
        }
        return ans;

        
    }
};