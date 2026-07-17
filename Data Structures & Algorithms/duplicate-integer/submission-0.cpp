class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        while(nums.size() > 0 && i < (int)nums.size() - 1){
           if(nums[i]==nums[i+1]) return true;
           i++;
           
        }
        return false;
    }
};