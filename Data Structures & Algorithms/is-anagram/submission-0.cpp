#include <vector>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<char> sString(s.begin(), s.end());
        std::vector<char> tString(t.begin(), t.end());

        std::sort(sString.begin(), sString.end());
        std::sort(tString.begin(), tString.end());

        if(s.size() != t.size())
        {
            return false;
        }

        for(int i = 0; i < sString.size(); i++)
        {
            if(sString.at(i) != tString.at(i))
            {
                return false;
            }

        }
        return true;

    }
};
