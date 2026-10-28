class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        string st="";
        for(int i=0;i<n;i++){
            
            if(s[i]==' '){
            if(ans!=""){
                ans+=' ';
            }
                ans+=st;
                st="";
            }else{
                st=s[i]+st;
            }
        }
         if(ans!=""){
                ans+=' ';
            }
        ans+=st;
        return ans;

    }
};