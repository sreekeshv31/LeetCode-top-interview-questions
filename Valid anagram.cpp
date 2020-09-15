/* Valid Anagram 
Given two strings s and t , write a function to determine if t is an anagram of s

Input: s = "anagram", t = "nagaram"
Output: true    
Input: s = "rat", t = "car"
Output: false
*/
//Method 1 96ms Easier but slow
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t?true:false);
        
    }
};

//Method 2: Faster solution 24ms
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            hash[s[i]]++;
            hash[t[i]]--;
        }
        for(auto count:hash)
            if(count.second)
                return false;
            return true;
            
        
        
        
    }
};