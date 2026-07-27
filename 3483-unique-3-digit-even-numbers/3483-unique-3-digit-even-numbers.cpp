class Solution {
public:
 bool check(int n,vector<int> freq){
         while(n>0){
            int r=n%10;
            if(freq[r]==0){
                return false;
            }
            freq[r]--;
            n/=10;
         }
         return true;
    }
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10,0);
        int n=digits.size();
        for(int i=0;i<n;i++){
            freq[digits[i]]++;
        }
        int ans=0;
        for(int i=100;i<1000;i=i+2){
            if(check(i,freq)){
                ans++;
            }
        }
        return ans;
        
        
    }
};