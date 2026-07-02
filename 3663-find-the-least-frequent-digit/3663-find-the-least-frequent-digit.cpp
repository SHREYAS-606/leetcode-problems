class Solution {
public:
    int getLeastFrequentDigit(int n) {
      vector<int> freq(10,0);
      
      while(n>0){
         int c=n%10;
         freq[c]++;
         n/=10;
      } 
      int ans=-1;

   for (int i = 0; i < 10; i++) {
    if (freq[i] == 0) continue;

    if (ans == -1 || freq[i] < freq[ans]) {
        ans = i;
    }
} 
      return ans;
    }
};