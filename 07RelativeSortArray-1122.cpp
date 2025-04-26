class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            vector<int>ans1;
            // vector<int>ans2;
            map<int,int>mp;
    
            for(int num:arr1)
            {
                mp[num]++;
            }
                // for(const auto& pair:mp)
                // {
                //     cout<<pair.first<<" : "<<pair.second<<endl;
                // }
            for(int i=0;i<arr2.size();i++)
            {
                for(auto it=mp.begin();it!=mp.end();)
                {
                    if(arr2[i]==it->first)
                    {
                        for(int j=0;j<it->second;j++)
                        {
                            ans1.push_back(it->first);
                         
                        }
                        mp.erase(it++);
                    }
                    else
                    {
                        ++it;
                    }
                      
    
                   
                }
            }
                for(const auto& pair:mp)
                {
                    cout<<pair.first<<" "<<pair.second<<endl;
                }
             
             for(const auto& pair:mp)
             {
                for(int i=0;i<pair.second;i++)
                {
                    ans1.push_back(pair.first);
                }
             }
           
           
    
            // ans1.insert(ans1.end(),ans2.begin(),ans2.end());
    
            return ans1;
        }
    };


    /*
    Example 1:

Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
Example 2:

Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
Output: [22,28,8,6,17,44]
    */