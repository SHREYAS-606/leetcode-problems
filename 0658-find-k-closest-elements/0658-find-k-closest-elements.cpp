class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int r=0;
        int l=0;
        
        vector<int> ans;
        int diff=0;
        int mini=INT_MAX;
        while(r<n){
            diff+=abs(arr[r]-x);
            int p=r-l+1;
        
            if(p==k){
                if(diff<mini){
                    ans.assign(arr.begin()+l,arr.begin()+r+1);
                    mini=diff;

                }
                diff-=abs(arr[l]-x);
                l++;

            }
            r++;


        }
        return ans;
    }
};