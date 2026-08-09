class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int back;
        int front;
        int n=colors.size();
        int count=0;
        for(int i=0;i<n;i++){
            back=i-1;
            if(back==-1)back=n-1;
            front=(i+1)%n;
            if(colors[i]!=colors[back] && colors[i]!=colors[front]){
                count++;
            }
            
        
        }
        return count;
        
    }
};