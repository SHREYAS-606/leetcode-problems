class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        int n=s2.size();
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
        }
        int r=0;
        int l=0;
        while(r<n){
            v2[s2[r]-'a']++;
            if((r-l+1)==s1.size()){
                if(v1==v2){
                    return true;
                }
                v2[s2[l]-'a']--;
                l++;
            }
            r++;
        }
        return false;

    }
};