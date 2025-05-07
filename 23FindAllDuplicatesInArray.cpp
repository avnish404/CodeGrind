class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int i:nums)
        {
            mp[i]++;
        }

        for(auto& m:mp)
        {
            if(m.second==2)
            {
                ans.push_back(m.first);
            }
        }

        return ans;
    }
};