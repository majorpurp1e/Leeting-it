class Solution
{
    public:
        int minimumPushes(string word)
        {
            int count = 0;
            int cost = 0;
            for (int i = 0; i < word.size(); i++)
            {
                if (i % 8 == 0)
                {
                    count++;
                }
                cost += count;
            }
            return cost;
        }
};
