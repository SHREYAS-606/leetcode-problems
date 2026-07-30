class Solution {
public:
    int minimumSum(int num) {
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;

        int mini1=INT_MAX;
        int mini2=INT_MAX;
        while(num>0){
            int c=num%10;
            if(c>maxi1){
                maxi2=maxi1;
                maxi1=c;
            }else if(c>maxi2){
                maxi2=c;
            }
            if(c<mini1){
                mini2=mini1;
                mini1=c;
            }else if(c<mini2){
                mini2=c;
            }
            num/=10;


        } 
        return mini1*10+mini2*10+maxi1+maxi2;     
    }
};