class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int right=height.size()-1;
        int left=0;
        int area=0;
        while(left<right)
        {
            int dummy=min(height[right],height[left])*(right-left);
            if(area<dummy)
            area=dummy;
            if(height[right]>height[left])
            left++;
            else
            right--;
        }
        return area;
    }
};
