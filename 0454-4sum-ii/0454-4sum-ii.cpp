class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int a=nums1.size();
        int b=nums2.size();
        int c=nums3.size();
        int d=nums4.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                int c=nums1[i]+nums2[j];
                mpp[c]++;
            }
        }
        int ans=0;
         for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                int c=nums3[i]+nums4[j];
                if(mpp.find(-c)!=mpp.end()){
                    ans+=mpp[-c];
                }
                
            }
        }
        return ans;
        

    }
};