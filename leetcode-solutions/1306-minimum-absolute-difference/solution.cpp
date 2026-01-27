class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        vector<vector<int>>ans;
        ans.push_back({arr[0], arr[1]});
        int i=2;
        while(i<arr.size())
        {
            if(arr[i]-arr[i-1]<diff)
            {
                ans.clear();
                diff=arr[i]-arr[i-1];
                ans.push_back({arr[i-1],arr[i]});
            }
            else if(arr[i]-arr[i-1]==diff)
            {
                ans.push_back({arr[i-1],arr[i]});
            }
            i++;

        }
        return ans;
    }
};
