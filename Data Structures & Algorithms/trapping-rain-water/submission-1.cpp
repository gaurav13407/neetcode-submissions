class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0;
        int rightmax=0;
        int water=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            if(height[i]<height[j]){
                if(height[i]>=leftmax) leftmax=height[i];
                else water+=leftmax-height[i];
                i++;
            }
            else{
                if(height[j]>=rightmax){
                    rightmax=height[j];
                }
                else{
                    water+=rightmax-height[j];
                }
                j--;
            }
        }
        return water;
    }
};
