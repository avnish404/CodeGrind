// User function Template for C++
class Solution
{
public:
    //   int findmin(int mini ,vector<int>arr,int i)
    //   {
    //       //Base case
    //       if(i==arr.size())
    //       {
    //           return mini;
    //       }
    //       if(arr[i]<mini)
    //       {
    //           mini = arr[i];
    //       }
    //       return findmin(mini,arr,i+1);
    //   }
    //   int findmax(int maxi ,vector<int>arr,int i)
    //   {
    //       //Base case
    //       if(i==arr.size())
    //       {
    //           return maxi;
    //       }
    //       if(arr[i]>maxi)
    //       {
    //           maxi = arr[i];
    //       }
    //       return findmax(maxi,arr,i+1);
    //   }
    pair<int, int> getMinMax(vector<int> arr)
    {
        // code here
        // int maxi=INT_MIN;
        // int mini = INT_MAX;
        // int ans1 = findmax(maxi,arr,0);
        // int ans2 = findmin(mini,arr,0);

        // return {ans2,ans1};

        // Second approach

        int mn = INT_MAX, mx = INT_MIN;
        for (int x : arr)
        {
            mn = min(mn, x);
            mx = max(mx, x);
        }
        return {mn, mx};
    }
};

/*


Min and Max in Array
Difficulty: BasicAccuracy: 68.55%Submissions: 378K+Points: 1Average Time: 10m
Given an array arr. Your task is to find the minimum and maximum elements in the array.

Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.

Examples:

Input: arr[] = [3, 2, 1, 56, 10000, 167]
Output: 1 10000
Explanation: minimum and maximum elements of array are 1 and 10000.
Input: arr[] = [1, 345, 234, 21, 56789]
Output: 1 56789
Explanation: minimum and maximum element of array are 1 and 56789.
Input: arr[] = [56789]
Output: 56789 56789
Explanation: Since the array contains only one element so both min & max are same.
Constraints:
1 <= arr.size() <= 105
1 <= arr[i] <=109

Expected Complexities
Topic Tags
Related Articles
If you are facing any issue on this page. Please let us know.


*/