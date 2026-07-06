class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> st;
            for (int i = 0; i < s.size(); i++)
            {
                if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
                {
                    st.push(s.at(i));
                }
                if (s.at(i) == '}')
                {
                    if (!st.empty() && st.top() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (s.at(i) == ')')
                {
                    if (!st.empty() && st.top() == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (s.at(i) == ']')
                {
                    if (!st.empty() && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if (st.empty())
                return true;
            else
                return false;
        }
};
