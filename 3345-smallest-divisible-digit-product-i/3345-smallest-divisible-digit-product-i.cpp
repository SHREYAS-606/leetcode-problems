class Solution {
public:
    int digitSum(int n){
        int sum=1;
        while(n>0){
           sum*=n%10;
           n/=10;
        }
        return sum;
    }
    int smallestNumber(int n, int t) {
          while(true){
            int sum=digitSum(n);
            if(sum%t==0)return n;
            n++;
          }
          return -1;
        
    }
};