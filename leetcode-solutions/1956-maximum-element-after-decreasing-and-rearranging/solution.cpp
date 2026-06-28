class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int i=1;
        while(i<arr.size()+1 && arr.size()>1)
        {
            if(i==arr.size())
            {
                break;
            }
            else if(arr[i]-arr[i-1]<=1)
            {
                i++;
            }else
            {
                arr[i]=arr[i-1]+1;
            }
        }
        return arr[i-1];
        
    }
};
