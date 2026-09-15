class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> f1;
        unordered_map<int,int> f2;
        int n=arr.size();
        for(int i=0;i<n;i++){
            f1[arr[i]]++;
        }
        for(auto &it:f1){
            if(f2[it.second]!=0)return false;
            f2[it.second]++;
        }


        return true;
    }
};