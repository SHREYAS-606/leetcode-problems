class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long long> ugly(n);
        ugly[0]=1;
        int m=primes.size();
        vector<int> ids(m,0);
        for(long long i=1;i<n;i++){
            long long mini = LLONG_MAX;
            int id=-1;
            for(int j=0;j<m;j++){
                long long k=ugly[ids[j]]*primes[j];
                if(k<mini){
                    mini=k;
                    
                }

            }
            
            
            ugly[i]=mini;
            for(int j = 0; j < m; j++) {
                if(ugly[ids[j]] * primes[j] == mini) {
                    ids[j]++;
                }
            }
        }
        return ugly[n-1];
        
    }
};