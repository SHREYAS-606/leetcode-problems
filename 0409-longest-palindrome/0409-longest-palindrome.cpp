class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        int ans=0;
        int has=0;
        for(auto it:freq){
           ans+=(it.second/2)*2;
           if(it.second%2==1){
            has=1;
           }

        }
        if(has==1){
            ans++;
        }
        return ans;
    }
};