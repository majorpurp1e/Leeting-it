class Solution
{
    public:
        int totalNumbers(vector<int> &digits)
        {
            unordered_set<int> count;
            for (int i = 0; i < digits.size(); i++)
            {
                if (digits[i] != 0)
                {
                    for (int j = 0; j < digits.size(); j++)
                    {
                        if (j != i)
                        {
                            for (int k = 0; k < digits.size(); k++)
                            {
                                int x = (digits[i] *100) + (digits[j] *10) + digits[k];
                                if (digits[k] % 2 == 0 && k != j && k != i && !count.contains(x))
                                {
                                    count.insert(x);
                                }
                            }
                        }
                    }
                }
            }
            return count.size();
        }
};
