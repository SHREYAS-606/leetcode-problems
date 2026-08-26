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
            st+=s[r];
            kcount+=s[r]-'0';
            
            if(kcount==k){
                if(st.size()<ans.size()||ans==""||(st.size()==ans.size()&& st<ans)){
                       ans=st;
                }
            }
            while(l<=r && kcount>=k){
                kcount-=(st[0]-'0');
                st.erase(0, 1);

                if(kcount==k){
                if(st.size()<ans.size()||ans==""||(st.size()==ans.size()&& st<ans)){
                       ans=st;
                }
                }
                l++;

            }
            r++;



        }
        return ans;
        
    }
};