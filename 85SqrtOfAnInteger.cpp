int getSqrt(int s,int e,int n,int ans)
{

    if(s>e)
    {
        return ans;
    }
    int mid = s+(e-s)/2;
    if( (long long)mid*mid == n ) //Typecasting mid*mid into long long
    {
        return mid;
    }
    if( (long long)mid*mid < n ) //Typecasting mid*mid into long long
    {
        return getSqrt(mid+1,e,n,mid);
    }
    else
    {
        return getSqrt(s,mid-1,n,ans);
    }
    
}


int floorSqrt(int n)
{
    // Write your code here.
        int s=0;
        int e=n;
        int ans = getSqrt(s,e,n,-1);
        return ans;

}


/*

Problem statement
You are given a positive integer ‘n’.



Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).



Example:
Input: ‘n’ = 7

Output: 2

Explanation:
The square root of the number 7 lies between 2 and 3, so the floor value is 2.


Detailed explanation ( Input/output format, Notes, Images )


Sample Input 1:
6
Sample Output 1:
2
Explanation of Sample Input 1:
The square root of the given number 6 lies between 2 and 3, so the floor value is 2.
Sample Input 2:
100
Sample Output 2:
10
Explanation of Sample Output 2:
The square root of the given number 100 is 10.
Expected Time Complexity:
Try solving this in O(log(n)).
Constraints:
0 <= n <= 10 ^ 9

Time Limit: 1 sec.

*/