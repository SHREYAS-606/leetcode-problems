class Solution {
public:
    int revNum(int n){
        int num=0;
        while(n>0){
            num=num*10+n%10;
            n/=10;
        }
        return num;
    }
    bool sumOfNumberAndReverse(int num) {
         for(int i=0;i<=num;i++){
            int rev=revNum(i);
            if(i+rev==num){
                return true;
            }

         }
         return false;
        
    }
};