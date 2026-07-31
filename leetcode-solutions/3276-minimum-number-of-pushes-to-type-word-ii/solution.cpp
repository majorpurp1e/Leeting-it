class Solution
{
    public:
        int minimumPushes(string word)
        {
            vector<int> freq(26, 0);
            int count = 0;
            int total = 0;
            int cost = 1;
            for (int i = 0; i < word.size(); i++)
            {
                freq[word[i] - 'a']++;
            }
            sort(freq.begin(), freq.end(), greater<int> ());
            for (int i = 0; i < freq.size(); i++)
            {
                count++;
                total = total + (freq[i] *cost);
                if (count % 8 == 0)
                {
                    cost++;
                }
            }
            return total;
        }
};
