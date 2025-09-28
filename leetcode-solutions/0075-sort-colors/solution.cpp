class Solution {
public:
int arr[3];
    void sortColors(vector<int>& nums) 
    {
        int r,w,b=0;
        int s=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            arr[0]++;
            else if(nums[i]==1)
            arr[1]++;
            else if(nums[i]==2)
            arr[2]++;
        }
        int j=0;
        while(arr[0]!=0)
        {
                nums[j]=0;
                j++;
                arr[0]--;
        }
        while(arr[1]!=0)
        {
                nums[j]=1;
                j++;
                arr[1]--;
        }
        while(arr[2]!=0)
        {
                nums[j]=2;
                j++;
                arr[2]--;
        }
        }
};
