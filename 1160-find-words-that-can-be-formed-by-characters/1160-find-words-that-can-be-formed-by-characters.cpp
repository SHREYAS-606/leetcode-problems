class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26,0);
        for(char x:chars){
            freq[x-'a']++;
        }
        int ans=0;
        for(string word:words){
            vector<int> freq2(26,0);
            for(char x:word){
                freq2[x-'a']++;
            }
            int p=1;
            for(char x:word){
                if(freq[x-'a']<freq2[x-'a']){
                    p=0;
                }
            }
            if(p){
                ans+=word.size();
            }
        }
        return ans;
    }
};