class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            // //First Approach to solve in O(n) spae complexity and O(n) time complexity
            // vector<int>temp(nums.size());

            // for(int i=0;i<nums.size();i++)
            // {
            //     temp[(i+k)%nums.size()]=nums[i];
            // }

            // nums=temp;



            //Second Approach to solve O(1) Space complexity and O(n) space complexity


            int n=nums.size();
            k=k%n;

            reverse(nums.begin(),nums.end());
                //Reverse first k elements
            reverse(nums.begin(),nums.begin()+k);
                    //Roverse last k elements
            reverse(nums.begin()+k,nums.end());


    
    }
       
};


/*

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 


*/