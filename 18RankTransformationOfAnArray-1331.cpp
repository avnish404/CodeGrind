class Solution {
    public:
        vector<int> arrayRankTransform(vector<int>& arr) {
            unordered_map<int,int>rank;
            vector<int>sorted_arr=arr;
            sort(sorted_arr.begin(),sorted_arr.end());
            int r=1;
            for(int num:sorted_arr)
            {
                if(rank.find(num)==rank.end())  //if element is not present then condition is ture and already then overall false (i assume rank.end() is the pointer pointing to outer of the last index of map)
                {
                    rank[num]=r++;
                }
            }
    
            for(int i=0;i<arr.size();i++)
            {
                arr[i]=rank[arr[i]];
            }
    
            return arr;
        }
    };


    /*
    Example 1:

Input: arr = [40,10,20,30]
Output: [4,1,2,3]
Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.
Example 2:

Input: arr = [100,100,100]
Output: [1,1,1]
Explanation: Same elements share the same rank.
Example 3:

Input: arr = [37,12,28,9,100,56,80,5,12]
Output: [5,3,4,2,8,6,7,1,3]
 
    */