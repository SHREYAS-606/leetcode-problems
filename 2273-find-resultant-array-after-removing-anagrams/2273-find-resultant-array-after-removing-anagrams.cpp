class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        
        vector<string> ans;
    
        for(int i=0;i<n;i++){
            if(i==0)ans.push_back(words[i]);
            else{
                string s=words[i];
                sort(s.begin(),s.end());
                string k=words[i-1];
                sort(k.begin(),k.end());
                if(s!=k)ans.push_back(words[i]);
            }
        }
        return ans;
        
    }
};