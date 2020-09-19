/*
Permutations
Given a collection of distinct integers, return all possible permutations.
Input: [1,2,3]
Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> si = nums;
        result.push_back(si);
        next_permutation(si.begin(),si.end());
        while(si!=nums)
        {
            result.push_back(si);
            next_permutation(si.begin(),si.end());
        }
        return result;
        
    }
};