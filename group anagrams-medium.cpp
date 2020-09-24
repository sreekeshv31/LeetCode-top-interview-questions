/* Group Anagrams

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Input: strs = [""]
Output: [[""]]

Input: strs = [""]
Output: [[""]]
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string s:strs)
        {
            string t = s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for(auto it:mp)
            anagrams.push_back(it.second);
        return anagrams;
        
        
    }
};