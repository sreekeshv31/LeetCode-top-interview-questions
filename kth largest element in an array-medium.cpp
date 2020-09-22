/* Kth Largest Element in an array

Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element

Input: [3,2,1,5,6,4] and k = 2
Output: 5
Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4

*/
//My own solution 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int ans = nums[k-1];
        return ans;
        
    }
};