class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ast;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]>0)ast.push_back(asteroids[i]);
            else{
                while(ast.size()>0 && ast.back()>0 && ast.back()<abs(asteroids[i])){
                    ast.pop_back();
                }

                if(ast.size()>0 && ast.back()==abs(asteroids[i] )){
                    ast.pop_back();
                }
                else if(ast.size()==0 || ast.back()<0){
                    ast.push_back(asteroids[i]);
                }
            }
        }
        return ast;

        
    }
};