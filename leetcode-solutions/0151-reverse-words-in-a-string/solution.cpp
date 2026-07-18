class Solution
{
    public:
        string reverseWords(string s)
        {
            stack<string> k;
            string save = "";
            int i = 0;
            while (i < s.size())
            {
                if (s[i] == ' ')
                {
                    if (save.size() > 0)
                    {
                        k.push(save);
                        save = "";
                    }

                    i++;
                }
                else
                {
                    save = save + s[i];
                    i++;
                }
            }
            if(save.size()>0)
            k.push(save);
            s = "";
            while (!k.empty())
            {
                s = s + k.top() + " ";
                k.pop();
            }
            return s.substr(0, s.size() - 1);
        }
};
