class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {

        int n=s.size();
        int r=0;
        int l=0;
        int count=0;
        int maxi=0;
        int len;
        while(r<n){
             if(isvowel(s[r])){
                count++;
             }
             len=r-l+1;
             if(len==k){
                maxi=max(maxi,count);
                if(isvowel(s[l])){
                   count--;
                }
                l++;
             }
             r++;
        }
        return maxi;
        
    }
};