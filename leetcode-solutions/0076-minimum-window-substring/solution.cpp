class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freqt;
        for (int i = 0; i < t.size(); i++) {
            freqt[t[i]]++;
        }
        int minsize = 100000;
        int startindex = -1;
        int count = t.size();
        int front = 0;
        int back = 0;
        while (front < s.size()) {
            if (count > 0) {
                if (freqt.contains(s[front])) {
                    if (freqt[s[front]] > 0) {
                        count--;
                    }
                    freqt[s[front]]--;
                }
                front++;
            }
            while (count == 0) {
                if (minsize > front - back) {
                    startindex = back;
                    minsize = front - back;
                }
                if (freqt.contains(s[back]) && freqt[s[back]] < 0) {
                    freqt[s[back]]++;
                    back++;
                } else if (!freqt.contains(s[back])) {
                    back++;
                } else {
                    freqt[s[back]]++;
                    count++;
                    back++;
                }
            }
        }
        if (startindex == -1)
            return "";
        else
            return s.substr(startindex, minsize);
    }
};
