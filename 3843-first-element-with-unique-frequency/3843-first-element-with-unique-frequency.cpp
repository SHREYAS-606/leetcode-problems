class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        unordered_map<int,int> freq;
        for(auto &it:mpp){
            freq[it.second]++;
        }

        for(int num:nums){
            if(freq[mpp[num]]==1){
                return num;
            }
        }
        return -1;

    }
};