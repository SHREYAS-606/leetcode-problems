class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int low=(n-k)<0?1:n-k;
        int high=n+k;
        int sum=0;
        for(int i=low;i<=high;i++){
            if((n-i)<=k && (n&i)==0){
                 sum+=i;
            }        
    }
    return sum;
    }
};