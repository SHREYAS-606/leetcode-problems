class Solution {
public:
    long long countCommas(long long n) {
        int comma=1;
        long long ans=0;
        long long num=1000;
        while(n>=num){
            if(n>=num && n<num*1000){
                ans+=comma*(n-num+1);
            }else{
            ans+=comma*(num*1000-num);
            }
            comma++;
            num*=1000;
       }
       return ans;
    }
};