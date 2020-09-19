/*
First Unique Character in a String
Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1
s = "leetcode"
return 0.

s = "loveleetcode"
return 2.
*/


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mymap;
        int ans = INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            if(mymap.find(s[i])==mymap.end())
                mymap[s[i]] = i;
            else
                mymap[s[i]] = INT_MAX;
        }
        for(auto it : mymap)
        {
            ans = min(it.second,ans);
        }
        return (ans==INT_MAX) ? -1:ans; 
        
    }
};