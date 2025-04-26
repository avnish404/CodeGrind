class Solution {
    public:
        int peak(vector<int>& arr)
        {
            int n=arr.size();
            int maxi=INT_MIN;
           for(int i=0;i<n;i++)
           {
               maxi=max(maxi,arr[i]);
           }
            cout<<maxi<<endl;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==maxi)
                {
                    cout<<i;
                    return i;
                }
            }
            
            return -1;
         
        }
        bool validMountainArray(vector<int>& arr) {
            int p=peak(arr);
            bool b=true;
            int n=arr.size();
            if(n<3 || p==n-1 || p==0)
            {
                return false;
            }
            for(int i=0;i<p;i++)
            {
                if(arr[i]<arr[i+1])
                {
                     b=true;
                }
                else
                {
                    return false;
                }
            }
            for(int i=p;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                     b=true;
                }
                else
                {
                    return false;
                }
            }
            return b;
        }
    };


    /*
    arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

 

Example 1:

Input: arr = [2,1]
Output: false
Example 2:

Input: arr = [3,5,5]
Output: false
Example 3:

Input: arr = [0,3,2,1]
Output: true
 
    */