// Last updated: 4/6/2025, 9:10:59 PM
#include<unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> container;
        bool flag = 0;
        for(int num : nums)
        {
            if(container.count(num))
            {
                flag = 1;
                break;
            }
            container.insert(num);
        }
        return flag;
    }
};