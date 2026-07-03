class Solution {
public:
    int rearrangeCharacters(string s, string target) {
             vector<int> freq(26,0);
             vector<int> freq2(26,0);
             int min=INT_MAX;
        for(char x:s){
            freq[x-'a']++;
        }
        for(char x:target){
            freq2[x-'a']++;
        }
        
        
       
            
            for(int i=0;i<26;i++){
                if(freq2[i]!=0){
                    int c=freq[i]/freq2[i];
                    min=min<c?min:c;
                }
            }
           
    
        return min;
        
    }
};