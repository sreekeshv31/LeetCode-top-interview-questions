/* Largest Number 

Given a list of non negative integers, arrange them such that they form the largest number.

Example 1:
Input: [10,2]
Output: "210"

Input: [3,30,34,5,9]
Output: "9534330"

*/



class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](const int &a,const int &b)
             {
                 return to_string(a)+to_string(b) > to_string(b)+to_string(a);
             });
        string ret = "";
        for(auto &v:nums)
            ret+=to_string(v);
        return ret[0]=='0'? "0":ret;
        
    }
};