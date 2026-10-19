class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int i=0;
        int j=nums.size()-1;
        for(int i=0;i<nums.size();++i){
            int has=target-nums[i];
            auto it=seen.find(has);
            if(it!=seen.end()){
                return{it->second,i};
            }
            seen[nums[i]]=i;
        }
        return {};
    }
};
