class Solution {
public:
    int convert(string st){
        int i=0;
        if(st[0]=='-'){
            i=1;
        }
        int n=st.size();
        int num=0;
        for(i;i<n;i++){
            num=num*10+(st[i]-'0');
        }
        if(st[0]=='-'){
            num=-num;
        }

        return num;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            int a,b;
            if(tokens[i]=="+"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(a+b);
            }else if(tokens[i]=="-"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b-a);
            }else if(tokens[i]=="*"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(a*b);
            }else if(tokens[i]=="/"){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b/a);
            }else{
                int k=convert(tokens[i]);
                st.push(k);
            }

        }
        return st.top();
    }
};