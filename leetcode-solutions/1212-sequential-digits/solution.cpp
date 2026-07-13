class Solution
{
    public:
        vector<int> sequentialDigits(int low, int high)
        {
            vector<int> ans;
            string s = "123456789";
            int k = to_string(high).size();
            int l = to_string(low).size();
            int i = 0;
            while (l <= k)
            {
                if (i + l <= s.size())
                {
                    int z = stoi(s.substr(i++, l));
                    if (z >= low && z <= high)
                    {
                        ans.push_back(z);
                    }
                }else
                {
                    i=0;
                    l++;
                }
            }
            return ans;
        }
};
