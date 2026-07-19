class Solution {
public:
    string smallestSubsequence(string s) 
    {
        stack<char> st;
        unordered_map<char,int> hash;
        for(int i=s.size()-1;i>-1;i--)
        {
            if(!hash.contains(s[i]))
            {
                hash[s[i]]=i;
            }
        }
        unordered_set<char> visit;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                visit.insert(s[i]);
            }
            else
            {
                if(st.top()<s[i] && !visit.contains(s[i]))
                {
                    st.push(s[i]);
                    visit.insert(s[i]);
                }
                else if(st.top()>s[i] && !visit.contains(s[i]))
                {
                    while(!st.empty() && hash[st.top()]>i && st.top()>s[i])
                    {
                        visit.erase(st.top());
                        st.pop();
                    }  
                    st.push(s[i]);
                    visit.insert(s[i]);
                }
            }

        }
        s="";
        while(!st.empty())
        {
            s=s+st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
