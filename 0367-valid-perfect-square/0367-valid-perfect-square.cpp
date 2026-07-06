class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return 1;
        int low=1;
        int high=num/2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((long long)mid*mid==num){
                return true;
            }
            if((long long)mid*mid<num){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;
        
    }
};