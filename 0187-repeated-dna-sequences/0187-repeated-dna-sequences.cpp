class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mpp;
        int n=s.size();
        int r=0;
        
        string st="";
        while(r<n){
            st+=s[r];
            if(st.size()==10){
                mpp[st]++;
                st.erase(0,1);
            }
            r++;
            
        }
        vector<string> ans;
        for(auto &it:mpp){
              if(it.second>1){
                ans.push_back(it.first);
              }
        }
        return ans;
        
    }
};