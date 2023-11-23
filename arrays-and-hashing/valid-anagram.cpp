#include <unordered_map>
#include <string>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> map;

        for (auto c : s)
        {
            map[c]++;
        }

        for (auto c : t)
        {
            if (map[c] < 1)
            {
                return false;
            }
            map[c]--; 
        }

        for (auto it : map)
        {
            if (it.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};