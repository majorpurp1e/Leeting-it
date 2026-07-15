class Solution {
public:
    int gcdOfOddEvenSums(int n) 
    {
        int odd=1;
        int even=2;
        int od=0;
        int eve=0;
        for(int i=0;i<=n;i++)
        {
            od=od+odd;
            odd=odd+2;
            eve=eve+even;
            even=even+2;
        }
        return gcd(od,eve)-1;
    }
};
