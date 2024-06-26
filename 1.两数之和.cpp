/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> table;
        for (int i = 0; i != nums.size(); ++i)
        {
            auto it = table.find(target - nums[i]);
            if (it != table.end())
                return {it->second, i};
            table[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
