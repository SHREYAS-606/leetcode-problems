class Solution {
public:
    int isPrefix(string p,string s){
        while(s.size()>0){
            if(p==s){
                return 1;
            }
            s.pop_back();
        }
        return 0;
    }
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(string x:words){
             if(isPrefix(x,s)){
                count++;
             }
        }
        return count;
        
    }
};