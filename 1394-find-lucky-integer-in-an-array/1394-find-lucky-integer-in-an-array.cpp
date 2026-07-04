class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int x:arr){
            freq[x]++;
        }
        int ans=-1;
        for(int x:arr){
            if(freq.find(x)!=freq.end() && freq[x]==x){
                ans=ans>x?ans:x;
            }
        }
        return  ans;
    }
};