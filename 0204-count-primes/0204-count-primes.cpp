class Solution {
public:
    int countPrimes(int n) {
       vector<int> sq(n + 1, 1);
        if(n<=2){
            return 0;
        }
        for(int i=2;i*i<n;i++){
            if(sq[i]){
            for(int j=i*i;j<n;j+=i){
                
                      sq[j]=0;
                
            }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(sq[i]==1){
                count++;
            }
        }
        return count;

        
    }
};