class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> freq(26,0);
        int r=0;
        int l=0;
        int maxfreq=0;
        int maxlen=0;
        while(r<n){
            freq[s[r]-'A']++;
            maxfreq=maxfreq>freq[s[r]-'A']?maxfreq:freq[s[r]-'A'];
            if((r-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            if((r-l+1)-maxfreq<=k){
                maxlen=maxlen>(r-l+1)?maxlen:(r-l+1);
            }
            r++;

        }
        return maxlen;
        
    }
};