class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size() + 1);
        for (auto it = hash.begin(); it != hash.end(); it++) {
            freq[it->second].push_back(it->first);
        }
        nums.clear();
        for (int i = freq.size() - 1; i >= 0; i--) {
            if (freq[i].size() == 1) {
                if (k > 0) {
                    nums.push_back(freq[i][0]);
                    k--;
                }
                if (k == 0)
                    break;
            } else if (freq[i].size() > 1) {
                for (int j = 0; j < freq[i].size(); j++) {

                    if (k > 0) {
                        nums.push_back(freq[i][j]);
                        k--;
                    }
                    if (k == 0)
                        break;
                }
            }
        }
        return nums;
    }
};
