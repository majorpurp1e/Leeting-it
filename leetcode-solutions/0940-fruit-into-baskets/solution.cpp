class Solution
{
    public:
        int totalFruit(vector<int> &fruits)
        {
            int si = 0;
            unordered_map<int, int> hash;
            int front = 0;
            int back = 0;
            while (front < fruits.size())
            {
                if (hash.size() < 2)
                {
                    if (!hash.contains(fruits[front]))
                        hash[fruits[front]] = 0;
                }
                if (hash.contains(fruits[front]))
                {
                    hash[fruits[front]]++;
                    front++;
                }
                else
                {
                    if (front - back > si)
                        si = front - back;
                    while (hash.size() == 2)
                    {
                        hash[fruits[back]]--;
                        if (hash[fruits[back]] == 0)
                            hash.erase(fruits[back]);
                        back++;
                    }
                }
            }
            if (front - back > si)
                si = front - back;
            return si;
        }
};
