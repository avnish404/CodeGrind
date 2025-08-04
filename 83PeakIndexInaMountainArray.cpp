class Solution {
public:
        int findPeak(vector<int>& arr,int s,int e,int ans)
        {
                    //Base case
                    if(s>=e)
                    {
                        return ans;
                    }

                    int mid=s+(e-s)/2;
                    if(arr[mid]<arr[mid+1])
                    {
                        return findPeak(arr,mid+1,e,ans);
                    }
                    else
                    {
                        ans=mid;
                        return findPeak(arr,s,mid,ans);
                    }
        }

    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        return findPeak(arr,s,e,-1);
    }
};



/*

852. Peak Index in a Mountain Array
Solved
Medium
Topics
premium lock icon
Companies
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

 

Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1

 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.


*/