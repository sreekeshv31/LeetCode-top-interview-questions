/* Find the duplicate number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one duplicate number in nums, return this duplicate number.

Follow-ups:

How can we prove that at least one duplicate number must exist in nums? 
Can you solve the problem without modifying the array nums?
Can you solve the problem using only constant, O(1) extra space?
Can you solve the problem with runtime complexity less than O(n2)?
 
 Input: nums = [1,3,4,2,2]
Output: 2
Input: nums = [3,1,3,4,2]
Output: 3
*/

//My own solution

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(auto it: hash)
            if(it.second>1)
                result = it.first;
        return result;
        
    }
};