class Solution {
public:
    int largestPrime(int n) {
        vector<bool> isPrime(n+1,true);
        isPrime[0]=false;
        isPrime[1]=false;
        if(n<=1)return 0;
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        int maxi=2;
        int sum=2;
        for(int i=3;i<=n;i+=2){
            if(isPrime[i]){
                if(sum+i<=n){
                 sum+=i;
                 if(isPrime[sum]){
                    maxi=sum;
                 }
                }else{
                    return maxi;
                }
            }
        }
        return maxi;

        
    }
};