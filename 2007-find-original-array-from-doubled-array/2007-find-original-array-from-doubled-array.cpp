class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size() % 2) return {};
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int x:changed){
            mpp[x]++;
        }
        sort(changed.begin(),changed.end());
        for(int x:changed){
            if(x==0 && mpp[x]%2==1)return {};
            if(mpp[x]==0)continue;
            if(mpp[2*x]==0)return {};
            ans.push_back(x);
            mpp[x]--;
            mpp[2*x]--;
        }
        return ans;
    }
};