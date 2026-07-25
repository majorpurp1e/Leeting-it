class Solution
{
    public:
        int maxProduct(int n)
        {
            int max2 = -1;
            int maxx = 0;
            for (int i = n; i > 0; i = i / 10)
            {
                maxx = max(maxx, i % 10);
            }
            int skip = 1;
            for (int i = n; i > 0; i = i / 10)
            {
                if (i % 10 == maxx && skip == 1)
                {
                    skip = 0;
                    continue;
                }
                else
                {
                    max2 = max(max2, i % 10);
                }
            }
            maxx = maxx * max2;
            return maxx;
        }
};
