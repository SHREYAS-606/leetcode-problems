class Solution {
public:
    int signFunc(double x){
        if(x<0){
            return -1;
        }else if(x>0){
             return 1;
        }else{
            return 0;
        }

    }
    int arraySign(vector<int>& nums) {
        double prod=1;
        for(int x:nums){
            prod*=x;
        }
       
        return signFunc(prod);
        
    }
};