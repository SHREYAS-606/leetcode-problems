class Solution {
public:
    int alternateDigitSum(int n) {
        int length=0;
        int k=n;
        while(k>0){
            k/=10;
            length++;
          
        }
        int sign=1;
        if(length%2==0){
             sign=0;
        }
        int sum=0;
        while(n>0){
            int c=n%10;
            if(sign==0){
                c=-1*c;
            }
            sum+=c;
            sign=sign^1;
            n=n/10;
        }
        return sum;
            


    }
};