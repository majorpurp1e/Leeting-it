class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        
        if (n == 1) {
            arr[0] = 0;
            return arr;
        } else if (n % 2 == 0) {
            int k = 0;
            int z = n - 1;
            for (int i = n / 2; i > 0; i--) {
                arr[k++] = -i;
                arr[z--] = i;
            }
            return arr;
        } else {
            int w = 0;
            int e = n - 1;
            for (int i = n / 2; i > 0; i--) {
                arr[w++] = -i;
                arr[e--] = i;
            }
            arr[(n - 1) / 2] = 0;
            return arr;
        }
    }
};

