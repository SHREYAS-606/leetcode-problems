class Solution {
public:
    
    string reverseWords(string s) {
        string word="";
        vector<string> ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                word+=s[i];
            }else{
                 if(word!=""){
                    ans.push_back(word);
                    word="";
                 }
            }
        }
        if(word!=""){
            ans.push_back(word);
        }
        int m=ans.size();
        string st="";
        for(int i=m-1;i>=0;i--){
            st+=ans[i];
            if(i!=0){
                st+=' ';
            }
            

        }
     return st;
        
    }
};