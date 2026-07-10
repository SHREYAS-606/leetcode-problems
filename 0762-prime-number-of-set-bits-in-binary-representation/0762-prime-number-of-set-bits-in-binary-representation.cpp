class Solution {
public:
    int countBit(int n){
        int cnt=0;
        while(n>0){
            cnt+=n&1;
            n=n>>1;
        }
        return cnt;
    }
    int countPrimeSetBits(int left, int right) {
        vector<bool> isPrime(20,true);
        isPrime[0]=false;
        isPrime[1]=false;
       for(int  i=2;i*i<=19;i++ ){
        if(isPrime[i]){
            for(int j=i*i;j<=19;j+=i){
                isPrime[j]=false;
            }
        }
       }
       int count=0;
       for(int i=left;i<=right;i++){
         int k=countBit(i);
         if(isPrime[k]){
            count++;
         }
       }
       return count;
    }
};