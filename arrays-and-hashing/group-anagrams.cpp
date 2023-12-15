#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        string sortedStr;
        unordered_map<string, vector<string>> wordMap;
        
        for (string str : strs)
        {
            sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            wordMap[sortedStr].push_back(str);
        }

        vector<vector<string>> out;

        for (auto& it : wordMap)
        {
            out.push_back(it.second);
        }

        return out;
    }
};
