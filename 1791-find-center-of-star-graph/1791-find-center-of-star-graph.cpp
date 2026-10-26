class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++){
            v[edges[i][0]-1]++;
            v[edges[i][1]-1]++;
            if(v[edges[i][0]-1]==n){
                return edges[i][0];
            }
            if(v[edges[i][1]-1]==n){
                return edges[i][1];
            }

        }
        return 0;
    }
};