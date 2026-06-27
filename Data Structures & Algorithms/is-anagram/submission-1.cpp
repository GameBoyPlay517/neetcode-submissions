class Solution {
public:
    bool isAnagram(string s, string t) 
    {    
        if(s.length() != t.length()) return false; 
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());

        int count = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == t[i]) count ++; 
        }
        
        if(count == s.length())return true;

        return false;
    }
};
