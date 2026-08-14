class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int r=0;
        int l=0;
        vector<int> freq(26,0);
        int maxi=0;
        while(r<n){
            freq[s[r]-'a']++;
            while(freq[s[r]-'a']>2){
                freq[s[l]-'a']--;
                l++;
            }
            maxi=maxi>(r-l+1)?maxi:(r-l+1);
            r++;
        }
        return maxi;
        
    }
};