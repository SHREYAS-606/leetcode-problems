class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int evenCount=0;
        int oddCount=0;
        int Omin=INT_MAX;
        int Emin=INT_MAX;
        for(int x:nums1){
            if(x%2){
                oddCount++;
                Omin=min(Omin,x);
            }else{
                evenCount++;
                Emin=min(Emin,x);
            }
        }
        if(evenCount==n || oddCount==n){
            return true;
        }
        if(Emin>Omin)return true;
        return false;
    }
};