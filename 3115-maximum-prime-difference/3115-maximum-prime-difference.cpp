class Solution {
public:
    int isPrime(int n){
        if(n<=1)return 0;
        if(n==2)return 1;
        if(n%2==0)return 0;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        for(int i=0;i<n;i++){
            int k=isPrime(nums[i]);
            if(k){
            if(first==-1){
                first=i;
            }
            last=i;
            }

            
        }
        return last-first;
        
    }
};