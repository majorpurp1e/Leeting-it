class Solution
{
    public:
        int strStr(string haystack, string needle)
        {
            if (haystack.size() >= needle.size())
            {

                for (int i = 0; i <= haystack.size() - needle.size(); i++)
                {
                    if (haystack[i] == needle[0])
                    {
                        int flag = 0;
                        int counter = 0;
                        for (int j = i; j < i+needle.size(); j++)
                        {
                            if (haystack[j] == needle[counter++])
                            {
                                flag++;
                            }
                            if (flag == needle.size())
                            {
                                return i;
                            }
                        }
                    }
                }
                return -1;
            }
            else
                return -1;
        }
};


