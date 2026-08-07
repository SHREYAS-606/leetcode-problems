class Solution {
public:
    int countSub(vector<int> &arr,int k){
        unordered_map<int,int> mpp;
        int r=0;
        int l=0;
        int n=arr.size();
        int count=0;
        while(r<n){
            mpp[arr[r]]++;
            while(mpp.size()>k){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0){
                    mpp.erase(arr[l]);
                }
                l++;
            }
            if(mpp.size()<=k){
                count+=(r-l+1);
            }
            r++;

        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int s=countSub(nums,k);
        int p=countSub(nums,k-1);
        return s-p;

    }
};