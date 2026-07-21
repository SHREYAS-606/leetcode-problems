class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> Prefix(m,vector<int>(n));
        vector<vector<int>> Suffix(m,vector<int>(n));
        long long suffixProd=1;
        long long prefixProd=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 Suffix[i][j]=suffixProd;
                 suffixProd=(suffixProd*grid[i][j])%12345;
                 Prefix[m-i-1][n-j-1]=prefixProd;
                 prefixProd=(prefixProd*grid[m-i-1][n-j-1])%12345;
            }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=(Prefix[i][j]*Suffix[i][j])%12345;
            }
         }

         return grid;

    }
};