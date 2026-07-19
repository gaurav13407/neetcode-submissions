class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            int dis=j-i;
            int mini=min(heights[i],heights[j]);
            int vol=mini*dis;
            maxWater=max(maxWater,vol);
            if(heights[i]>heights[j]) j--;
            else i++;
        }
        return maxWater;
    }
};
