class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums.size()==1)return count;
            int p=nums.size();
            int k=0;
            int j=1;
            int iss=1;
            int mini=-1;
            int minj=-1;
            int minsum=INT_MAX;
            
            while(j<p){
                
                if(nums[k]<=nums[j]){
                   
                    int sum=nums[k]+nums[j];
                    if(sum<minsum){
                        minsum=sum;
                        mini=k;
                        minj=j;
                    }
                    k++;
                    j++;
                }else{
                    iss=0;
                    int sum=nums[k]+nums[j];
                    if(sum<minsum){
                        minsum=sum;
                        mini=k;
                        minj=j;
                    }
                    k++;
                    j++;
                }

            }
            if(iss)return count;

            nums[mini] = nums[mini] + nums[minj];
            nums.erase(nums.begin() + minj);
            count++;


        }
        return count;
        
    }
};