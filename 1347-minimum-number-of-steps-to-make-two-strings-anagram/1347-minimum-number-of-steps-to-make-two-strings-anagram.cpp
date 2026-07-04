class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> cnt(26,0);
        for(char x:s)cnt[x-'a']++;
        for(char x:t)cnt[x-'a']--;
        int ans=0;
        for(int i=0;i<26;i++){
            if(cnt[i]>0)ans+=cnt[i];
        }
        return ans;

        
    }
};