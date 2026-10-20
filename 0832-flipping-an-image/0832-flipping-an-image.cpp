class Solution {
public:
    void reverse(vector<vector<int>>& image,int row){
          int n=image[row].size();
          int l=0;
          int r=n-1;
          while(l<=r){
            if(l==r){
                image[row][l]^=1;
            }else{
            image[row][l]^=1;
            image[row][r]^=1;
            int temp=image[row][l];
            image[row][l]=image[row][r];
            image[row][r]=temp;
           
            }
             l++;
            r--;
          }

    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        for(int i=0;i<m;i++){
             reverse(image,i);
        }
      return image;
    }
};