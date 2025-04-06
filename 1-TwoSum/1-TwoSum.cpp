// Last updated: 4/6/2025, 9:32:21 PM
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        vector<int> ret;
        int counter=0;
        for(int num:nums)
        {
            if (map.count(target - num))
            {
                ret.push_back(map[target - num]);
                ret.push_back(counter);
            }
            map.insert({num,counter});
            counter++;
        }
        return ret;
    }
};