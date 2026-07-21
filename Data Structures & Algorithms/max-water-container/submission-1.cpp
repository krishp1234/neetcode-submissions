class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_area = (right - left) * (min(heights[right], heights[left]));
        while(left < right){
            if(max_area < (right - left) * (min(heights[right], heights[left]))){
                max_area = (right - left) * (min(heights[right], heights[left]));
            }
            if(heights[left] > heights[right]){
                --right;
            }
            else{
                ++left;
            }
        }
        return max_area;
    }
};
