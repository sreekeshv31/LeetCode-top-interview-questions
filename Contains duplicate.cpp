/*Contains Duplicate 
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Input: [1,2,3,1]
Output: true
Input: [1,2,3,4]
Output: false
Input: [1,1,1,3,3,4,3,2,4,2]
Output: true

*/
//Method 1

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums.at(i));
        }
        return s.size()!=nums.size();
        
    }
};

//Method 2
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
        
    }
};