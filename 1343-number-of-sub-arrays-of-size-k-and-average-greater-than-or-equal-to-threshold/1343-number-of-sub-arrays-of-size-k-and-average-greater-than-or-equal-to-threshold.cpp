class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int r=0;
        int l=0;
        int sum=0;
        int count=0;
        while(r<n){
            sum+=arr[r];
            int len=r-l+1;
            if(len==k){
                if(sum/k>=threshold){
                    count++;
                }
                sum-=arr[l];
                l++;
            }
            r++;
            
        }
        return count;
        
    }
};