class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int dummy = num;
        unordered_map<int, string> hash;
        hash[1] = "I";
        hash[5] = "V";
        hash[10] = "X";
        hash[50] = "L";
        hash[100] = "C";
        hash[500] = "D";
        hash[1000] = "M";
        for (int i = 1000; i > 0; i=i/10) {
            int check = dummy / (i);
            if (i == 1000 && check != 0) // for thousands place
            {
                while (check > 0) {
                    ans = ans + hash[1000];
                    check--;
                }
                dummy = dummy % (i);
            }if (i == 100 && check != 0) // for hundreds place
            {
                if (check == 9) {
                    ans = ans + hash[100] + hash[1000];
                    check = check - 9;
                } else if (check >= 5) {
                    ans = ans + hash[500];
                    check = check - 5;
                } else if (check == 4) {
                    ans = ans + hash[100] + hash[500];
                    check = check - 4;
                }
                if (check >= 1 && check < 4) {
                    while (check > 0) {
                        ans = ans + hash[100];
                        check--;
                    }
                }
                dummy = dummy % (i);
            }if (i == 10 && check != 0) // for tens place
            {
                if (check == 9) {
                    ans = ans + hash[10] + hash[100];
                    check = check - 9;
                } else if (check >= 5) {
                    ans = ans + hash[50];
                    check = check - 5;
                } else if (check == 4) {
                    ans = ans + hash[10] + hash[50];
                    check = check - 4;
                }
                if (check >= 1 && check < 4) {
                    while (check > 0) {
                        ans = ans + hash[10];
                        check--;
                    }
                }
                dummy = dummy % (i);
            }if (i == 1 && check != 0) // for ones place
            {
                if (check == 9) {
                    ans = ans + hash[1] + hash[10];
                    check = check - 9;
                } else if (check >= 5) {
                    ans = ans + hash[5];
                    check = check - 5;
                } else if (check == 4) {
                    ans = ans + hash[1] + hash[5];
                    check = check - 4;
                }
                if (check >= 1 && check < 4) {
                    while (check > 0) {
                        ans = ans + hash[1];
                        check--;
                    }
                }
                dummy = dummy % (i);
            }
        }
        return ans;
    }
};
