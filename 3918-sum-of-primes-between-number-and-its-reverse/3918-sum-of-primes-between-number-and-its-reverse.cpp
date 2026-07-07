class Solution {
public:
    int reverseNum(int num){
        int sum=0;
        while(num>0){
            sum=sum*10+num%10;
            num/=10;

        }
        return sum;
    }
    int sumOfPrimesInRange(int n) {
        int x=reverseNum(n);
        int high=max(n,x);
        int low=min(n,x);
        vector<int> isPrime(high+1,1);
        isPrime[0]=0;
        isPrime[1]=0;
        for(int i=2;i*i<=high;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=high;j+=i){
                    isPrime[j]=0;
                }
            }
        }
        int sum=0;
        for(int i=low;i<=high;i++){
            if(isPrime[i]){
                sum+=i;
            }
        }

        return sum;

    }
};