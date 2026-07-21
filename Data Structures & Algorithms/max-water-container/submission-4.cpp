class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_area = (right - left) * (min(heights[left], heights[right]));
        
        while(left < right){
            if((right - left) * (min(heights[left], heights[right])) > max_area){
                max_area = (right - left) * (min(heights[left], heights[right]));
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
