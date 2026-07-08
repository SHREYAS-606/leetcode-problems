class Solution {
public:
    int isPrime(int n){
        if(n<=1)return 0;
        for(int i=2;i<n;i++){
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
            if(k && first==-1){
                first=i;
            }
            if(k && first!=-1){
                last=i>last?i:last;
            }


            
        }
        return abs(first-last);
        
    }
};