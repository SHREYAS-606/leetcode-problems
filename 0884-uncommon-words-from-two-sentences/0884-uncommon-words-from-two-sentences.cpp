class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mpp;
        string d1="";
        string d2="";
        vector<string> ans;
        for(char x:s1){
             if(x==' '){
                mpp[d1]++;
                d1="";
             }else{
                d1+=x;
             }
        }
        if(d1!=""){
            mpp[d1]++;
        }
        for(char x:s2){
             if(x==' '){
                mpp[d2]++;
                d2="";
             }else{
                d2+=x;
             }
        }
        if(d2!=""){
            mpp[d2]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};