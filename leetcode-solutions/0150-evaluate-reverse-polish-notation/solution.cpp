class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
            {
                st.push(stoi(tokens[i]));
            }
            if(tokens[i]=="+")
            {
                int z=st.top();
                st.pop();
                int k=st.top();
                st.pop();
                st.push(z+k);
            }
            else if(tokens[i]=="-")
            {
                int z=st.top();
                st.pop();
                int k=st.top();
                st.pop();
                st.push(k-z);
            }
            else if(tokens[i]=="*")
            {
                int z=st.top();
                st.pop();
                int k=st.top();
                st.pop();
                st.push(z*k);
            }
            else if(tokens[i]=="/")
            {
                int z=st.top();
                st.pop();
                int k=st.top();
                st.pop();
                st.push(k/z);
            }
        }
        return st.top();
    }
};
