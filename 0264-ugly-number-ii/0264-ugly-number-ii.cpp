class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0]=1;
        int a=0,b=0,c=0;
        for(int i=1;i<n;i++){
            int x=ugly[a]*2;
            int y=ugly[b]*3;
            int z=ugly[c]*5;
            ugly[i]=min({x,y,z});
            
            if(ugly[i]==x)a++;
            if(ugly[i]==y)b++;
            if(ugly[i]==z)c++;


        }
        return ugly[n-1];
        
    }
};