/* Missing Number
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Input: [3,0,1]
Output: 2

Input: [9,6,4,2,3,5,7,0,1]
Output: 8
*/


//Method 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int r1 = n*(n+1)/2;
        int r2 = accumulate(nums.begin(),nums.end(),0);
        return r1-r2;
        
    }
};

//accumulate header file - <numeric>
//Method 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        return ((n*(n+1)/2)- accumulate(nums.begin(),nums.end(),0));
        
    }
};