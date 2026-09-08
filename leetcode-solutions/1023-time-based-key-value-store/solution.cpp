class TimeMap
{
    public:
        unordered_map<string, vector<pair<int, string>>> hash;
    TimeMap() {}
    void set(string key, string value, int timestamp)
    {
        this->hash[key].push_back({ timestamp,
            value });
    }

    string get(string key, int timestamp)
    {
        auto& vv = this->hash[key];
        if (vv.size() == 0)
        {
            return "";
        }
        else
        {
            int start = 0;
            int end = vv.size() - 1;
            int rem = INT_MIN;
            string rems = "";
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (vv[mid].first < timestamp)
                {
                    start = mid + 1;
                    if (vv[mid].first > rem)
                    {
                        rem = vv[mid].first;
                        rems = vv[mid].second;
                    }
                }
                else if (vv[mid].first > timestamp)
                {
                    end = mid - 1;
                }
                else
                {
                    return vv[mid].second;
                }
            }

            return rems;
        }
    }
};

/**
 *Your TimeMap object will be instantiated and called as such:
 *TimeMap* obj = new TimeMap();
 *obj->set(key,value,timestamp);
 *string param_2 = obj->get(key,timestamp);
 */
