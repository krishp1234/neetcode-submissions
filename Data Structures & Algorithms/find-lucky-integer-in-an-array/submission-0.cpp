class Solution {
public:
    int findLucky(vector<int>& arr) {
      unordered_map<int, int> values;
      for(auto i : arr){
        ++values[i];
      }
      int res = -1;
      for(auto i : values){
        if(i.first == i.second){
            res = max(res, i.first);
        }
      } 
      return res; 
    }
};