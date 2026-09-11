class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int r=0;
        int l=0;
        unordered_map<char,int> mpp;
        int count=0;
        while(r<n){
              mpp[s[r]]++;
              int len=r-l+1;
              if(len==3){
                if(mpp.size()==3){
                    count++;
                }
                mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                }
                l++;
              }
              r++;
        }
        return count;
        
    }
};