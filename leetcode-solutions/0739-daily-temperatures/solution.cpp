class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &temperatures)
        {
            vector<int> ans(temperatures.size(), 0);
            stack<int> st;
            int start = 1;
            st.push(0);
            while (start < temperatures.size())
            {
                if (!st.empty() && temperatures[st.top()] < temperatures[start])
                {
                    ans[st.top()] = start - st.top();
                    st.pop();
                }
                else if (st.empty() || temperatures[st.top()] >= temperatures[start])
                {
                    st.push(start);
                    start++;
                }
            }

            return ans;
        }
};
