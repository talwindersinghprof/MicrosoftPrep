https://leetcode.com/problems/group-anagrams/description/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>>ans;
       if(strs.size()==0)return ans;  
       unordered_map<string,vector<string>>m;
	 string s="";
       for(int i=0;i<strs.size();i++)
       {
          s="";
        s=strs[i];
        sort(s.begin(),s.end());
        m[s].push_back(strs[i]);
       }
    for(auto it=m.begin();it!=m.end();it++)
       {
                ans.push_back(it->second);
       }
       return ans;
    }
   
};
