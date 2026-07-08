class Solution {
public:
    int isPrime(int n){
        if(n<=1)return false;
        for(int i=2;i<n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto &it:mpp){
            if(isPrime(it.second)){
                return true;
            }

        }
        return false;
        
    }
};