class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int num:nums) ans.push_back(num);
        for(int num:nums) ans.push_back(num);
        return ans;
    }
};