#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here

    //First Approach
	// int ans=0;
    // for(int i=0;i<arr.size();i++)
    // {
    //     ans=ans^arr[i];
    // }
    // for(int i=1;i<arr.size();i++)
    // {
    //     ans=ans^i;
    // }
    // return ans;


    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return 0;
}


/*
Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation of sample input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
Sample Input 2:
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7


Hints:
1. Simply calculate the frequency of each value.
2. Try to optimise the above approach by using an array to store the frequencies.
3. Think of a solution using Floyd’s cycle finding algorithm.
4. Try to think of a solution based on bitwise XOR.
*/