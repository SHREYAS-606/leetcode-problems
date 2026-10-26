class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n=s.size();
        int freq=0;
        long long sum=0;
        for(int i=0;i<n;i++){
              if(s[i]==c){
                freq++;
                sum+=freq;
              }
        }
        return sum;

    }
};