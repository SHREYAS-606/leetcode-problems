class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp;
        int n=arr.size();
        for(int x:arr){
            temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        unordered_map<int,int> mpp;
        int r=1;
        for(int x:temp){
            if(mpp.find(x)==mpp.end()){
                mpp[x]=r++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;



        
    }
};