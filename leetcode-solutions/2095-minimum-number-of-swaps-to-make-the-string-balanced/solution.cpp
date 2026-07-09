class Solution {
public:
    int minSwaps(string s) 
    {
        stack<char> st;
        for(int i =0;i<s.size();i++)
        {
            char b=s.at(i);
            if(b==']')
            {
                if(st.empty())
                {
                    st.push(b);
                }else if(st.top()=='[')
                {
                    st.pop();
                }
            }else
                {
                    st.push(b);
                }
        }
        if(st.size()==0)
        return 0;
        else 
        return (st.size()/2);
    }
};
