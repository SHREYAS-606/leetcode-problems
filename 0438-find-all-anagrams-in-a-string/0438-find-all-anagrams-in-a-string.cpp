class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        vector<int> ans;
        for(char x:p){
            v1[x-'a']++;
        }
        int n=s.size();
        int r=0;
        int l=0;
        while(r<n){
            v2[s[r]-'a']++;
            if(r-l+1==p.size()){
                if(v2==v1){
                    ans.push_back(l);
                }
                v2[s[l]-'a']--;
                l++;
            }
            r++;

        }
        return ans;
        
    }
};