class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<bool> isPrime(right+1,true);
        if(left<=2 && right<=2)return{-1,-1};
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<=right;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=right;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        vector<int> ans(2,-1);
        int j=left;
        int mini=INT_MAX;
        for(int i=left+1;i<=right;i++){
            if(!isPrime[j]){
                 j=i;
                 continue;
            }
            if(isPrime[j] && isPrime[i] ){
                      int k=i-j;
         
                      if(k<mini){
                        mini=k;
                      ans[0]=j;
                      ans[1]=i;
                      }
                      j=i;
            }
        }

        return ans;
        

        
    }
};