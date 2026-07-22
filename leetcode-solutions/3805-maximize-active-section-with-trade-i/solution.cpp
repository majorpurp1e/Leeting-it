class Solution
{
    public:
        int maxActiveSectionsAfterTrade(string s)
        {
            int left = 0;
            int middle = 0;
            int right = 0;
            int fina = 0;
            int count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '0')
                {
                    if (middle == 0)
                    {
                        left++;
                    }
                    else
                    {
                        right++;
                    }
                }
                else if (s[i] == '1')
                {
                    count++;
                    if (left > 0 && right == 0)
                        middle++;
                    else if (right > 0)
                    {
                        fina = max(fina, left + right);
                        left = right;
                        right = 0;
                        middle = 1;
                    }
                }
            }
            if (right > 0)
            {
                fina = max(fina, left + right);
            }
            return count + fina;
        }
};
