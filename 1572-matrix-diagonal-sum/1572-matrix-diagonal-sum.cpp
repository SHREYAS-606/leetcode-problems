class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int i=0;
       int j=mat.size()-1;
       int sum=0;
       while(j>=0){
          if(i==j){
            sum+=mat[i][j];
          }else{
            sum+=mat[i][i];
            sum+=mat[i][j];
          }
          i++;
          j--;
       }
       return sum; 
    }
};