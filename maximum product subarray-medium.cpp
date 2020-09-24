/* Maximum Product Subarray 

Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.
Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/



class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int best = INT_MIN;
        int maxProduct = 1;
        int minProduct = 1;
        for(int n:nums)
        {
            if(n<0)
            {
                swap(maxProduct,minProduct);
            }
            maxProduct = max(maxProduct*n,n);
            minProduct = min(minProduct*n,n);
            best = max(best,maxProduct);
        }
        return best;
    }
};