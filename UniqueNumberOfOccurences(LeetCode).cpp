class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        /*First Approach*/

        // int count=1;
        // vector<int>ans;
        // sort(arr.begin(),arr.end());
        // for(int i=0;i<arr.size();i++)
        // {   if(i<arr.size()-1)
        // {
        //          if(arr[i]==arr[i+1])
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         ans.push_back(count);
        //         count=1;
        //     }
        // }
        // else
        // {
        //     ans.push_back(count);
        // }
           
        // }
        
        // sort(ans.begin(),ans.end());
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(i<ans.size()-1)
        //     {
        //              if(ans[i]==ans[i+1])
        //     {
        //         return false;
        //     }
        //     }
           
        // }
        // return true;


        /*Second Approach*/

        map<int,int>mp;

        for(int i:arr)
        {
            mp[i]++;
        }

        map<int,int>ans;

        for(auto& i:mp)
        {
            ans[i.second]++;
            if(ans[i.second]>1)
            {
                return false;
            }

        }
        return true;
    }
};