class Solution {
public:
    int wordCount(string s){
        int n=s.size();
        int count=1;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                count++;
            }
        }
        return count;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n=messages.size();
        unordered_map<string,int> mpp;
        for(int i=0;i<n;i++){
             mpp[senders[i]]+=wordCount(messages[i]);
        }
        string ans;
        int mx=0;
        for(auto &it:mpp){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }else if(it.second==mx && it.first>ans){
                ans=it.first;

            }

        }
        return ans;
        
    }
};