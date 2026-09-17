class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int r=0;
        int l=0;
        int n=cards.size();
        int mini=INT_MAX;
        unordered_map<int,int> mpp;
        while(r<n){
             mpp[cards[r]]++;
             while(r-l+1>mpp.size()){
                mini=min(mini,r-l+1);
                mpp[cards[l]]--;
                if(mpp[cards[l]]==0)mpp.erase(cards[l]);
                l++;
             }
             r++;
        }
        if(mini==INT_MAX)return -1;
        return mini;
        
    }
};