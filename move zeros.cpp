/* Move Zeroes
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

You must do this in-place without making a copy of the array.
Minimize the total number of operations.


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        fill(remove(nums.begin(),nums.end(),0),nums.end(),0);
        
    }
};