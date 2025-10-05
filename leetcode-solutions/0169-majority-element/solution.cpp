#include <bits/stdc++.h>
using namespace std;
class Solution { 
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int, int> index;
    for(int i=0;i<nums.size();i++)
     {
        index[nums[i]]++;
     }
     int ind=0;int val=0;
     for(auto &w : index)
     {
        if(w.second>(nums.size()/2) || w.second>ind)
        {
            ind=w.second;
            val=w.first;
        }
     }
     return val;
    }
};
