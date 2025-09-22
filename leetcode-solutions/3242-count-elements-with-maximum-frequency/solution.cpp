class Solution {
public:
int arr[100];
    int maxFrequencyElements(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]-1]=arr[nums[i]-1]+1;
        }
        int c=0;
        int index=0;
        for(int i=0;i<100;i++)
        {

            if(arr[i]>arr[index])
            {
                c=1;
                index=i;
            } else if(arr[i]==arr[index])
            {
                c++;
                index=i;
            }

        }
        return (c*arr[index]);
    }
};
