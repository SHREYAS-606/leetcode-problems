class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        int n=word1.size();
        int m=word2.size();

        for(int i=0;i<n;i++){
            str1+=word1[i];
        }
        
        for(int i=0;i<m;i++){
            str2+=word2[i];
        }
        return str1==str2;
    }
};