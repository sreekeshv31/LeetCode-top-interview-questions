/* Sum of Two Integers

Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
Input: a = 1, b = 2
Output: 3


Input: a = -2, b = 3
Output: 1

*/

//My own solution 


class Solution {
public:
    int getSum(int a, int b) {
        vector<int> v1;
        v1.push_back(a);
        v1.push_back(b);
        int ans = accumulate(v1.begin(),v1.end(),0);
        return ans;
        
    }
};