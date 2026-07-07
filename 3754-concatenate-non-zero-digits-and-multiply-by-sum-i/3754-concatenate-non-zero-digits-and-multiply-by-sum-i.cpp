class Solution {
public:
    int removeZero(int num){
        int sum=0;
        while(num>0){
            if(num%10){
                sum=sum*10+num%10;
            }
            num/=10;
        }
        return sum;
    }
    long long sumAndMultiply(int n) {
       long long sum=0;
        long long k=removeZero(n);
        k=removeZero(k);
        while(n>0){
            sum+=n%10;
            n/=10;
        }

        return sum*k;

    }
};