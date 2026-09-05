class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26,0);
        for( char x:s){
            if(freq[x-'a']){
                return x;
            }else{
            freq[x-'a']++;
            }
        }
        return ' ';
        
    }
};