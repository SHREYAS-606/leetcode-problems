class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26,0);
        
        for(char x:s){
            freq[x-'a']++;
        }
        int vmax=INT_MIN;
        int cmax=INT_MIN;
        for(int i=0;i<26;i++){
            char c=i+'a';
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vmax=vmax>freq[i]?vmax:freq[i];
                continue;
            }
            cmax=cmax>freq[i]?cmax:freq[i];
        }
        return cmax+vmax;

    }
};