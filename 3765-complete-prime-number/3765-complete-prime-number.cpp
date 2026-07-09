class Solution {
public:
    int isPrime(int n){
        if(n<=1)return 0;
        if(n==2)return 1;
        if(n%2==0)return 0;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)return 0;
        }
        return 1;

    }
    int prefixPrime(int n){
          n/=10;
          while(n>0){
            if(!isPrime(n)) return 0;
            n/=10;

          }
          return 1;

    }
    int suffixPrime(int n){
       int c=0;
       int mul=1;
       while((n/10)>0){
        c=(n%10)*mul+c;
        if(!isPrime(c)){
            return 0;
        }
        n/=10;
        mul*=10;
       }
       return 1;

    }
    bool completePrime(int num) {
        int prefix=0;
        int suffix=0;
        if(!isPrime(num)){
            return false;
        }
        prefix=prefixPrime(num);
        if(prefix){
            suffix=suffixPrime(num);
        }
        return prefix && suffix;

        
    }
};