
class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) 
    {
        nums.push_back(upper+1);
        vector<vector<int>>ans;
        for(auto &x: nums)   
        {
            if(lower<x)
                {
                    ans.push_back({lower,x-1});  
                }
                 lower=x+1;
        }
        return ans;
    }
};
