class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int end=*max_element(piles.begin(),piles.end());
        int start=1;
        while(start<end)
        {
            int mid=(start+end)/2;
            int hours=0;
            for(int i=0;i<piles.size();i++)
            {
                hours+=(piles[i] + mid - 1) / mid;;
            }
            if(hours<=h)
            {
                end=mid;
            }
            else
            {
                start=mid+1;
            }
        }
        return start;
        
    }
};
