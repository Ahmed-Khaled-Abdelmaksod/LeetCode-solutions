// Last updated: 4/6/2025, 8:48:05 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ret;
        for(int i=0;i<nums.size();i++)
        {
            ret.push_back(nums.at(i));
        }
        for(int i=0;i<nums.size();i++)
        {
            ret.push_back(nums.at(i));
        }
        return ret;
    }
};