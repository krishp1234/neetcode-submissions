class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        for(int i = 0; i < heights.size(); ++i){
            for(int j = i + 1; j < heights.size(); ++j){
                max_area = max(max_area, (j - i)*(min(heights[i], heights[j])));
            }
        }
        return max_area;
    }
};
