#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> numberMap;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (numberMap.count(complement)) {
                return {numberMap[complement], i};
            }
            numberMap.insert({nums[i], i});
        }

        return {};
    }
};