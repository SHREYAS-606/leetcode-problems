class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int r=0;
        int l=0;
        int kcount=0;
        string st="";
        string ans="";
        while(r<n){
            st = s.substr(l, r - l + 1);
            kcount+=s[r]-'0';
            
            if(kcount==k){
                if(st.size()<ans.size()||ans==""||(st.size()==ans.size()&& st<ans)){
                       ans=st;
                }
            }
            while(l<=r && kcount>=k){
                kcount-=(s[l]-'0');
                l++;

                if(kcount==k){
                st = s.substr(l, r - l + 1);
                if(st.size()<ans.size()||ans==""||(st.size()==ans.size()&& st<ans)){
                       ans=st;
                }
                }
                

            }
            r++;



        }
        return ans;
        
    }
};