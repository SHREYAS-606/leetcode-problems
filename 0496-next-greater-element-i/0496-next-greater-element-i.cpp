class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        stack<int> st;
        unordered_map<int,int> mpp;
        for(int i=0;i<m;i++){
            while(!st.empty() && nums2[i]>st.top()){
                mpp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            mpp[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<n;i++){
            nums1[i]=mpp[nums1[i]];
        }
        return nums1;
    }
};