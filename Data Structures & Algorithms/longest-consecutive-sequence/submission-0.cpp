class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ans;
        for(int num:nums){
            ans.insert(num);
        }
        int maxLength=0;
        for (auto num:ans){
            if(ans.contains(num-1)) continue;
            int length=1;
            int current=num;
            while(ans.contains(current+1)){
                current++;
                length++;
            }
            maxLength=max(maxLength,length);
            
        }
        return maxLength;
    }
};
