class Solution {
public:
    int GCD(int even,int odd){
        while(odd!=0){
            int r=even%odd;
            even=odd;
            odd=r;
        }
        return even;
    }
    int gcdOfOddEvenSums(int n) {
        if(n==0)return 0;
        return GCD(n*(n+1),n*n);
    }
};