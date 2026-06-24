class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mpp;
        int n=words.size();
        for(int i=0;i<n;i++){
            mpp[words[i]]++;
        }
        vector<vector<string>> freq(n+1);

        for(auto it:mpp){
            freq[it.second].push_back(it.first);

        }
        vector<string> ans;
        for(int i=n;i>=0;i--){
            sort(freq[i].begin(),freq[i].end());
            for(string w:freq[i]){
                ans.push_back(w);
                if(ans.size()==k){
                return ans;
                }
            }
            

        }
        return ans;

    }
};