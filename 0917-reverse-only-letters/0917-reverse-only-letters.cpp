class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int r=n-1;
        int l=0;
        while(l<r){
            while(l<r && !isalpha(s[l])){
                l++;
            }
            while(l<r && !isalpha(s[r])){
                r--;
            }
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            r--;
            l++;
        }
        return s;
        
    }
};