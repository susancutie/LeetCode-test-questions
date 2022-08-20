//
// Created by Harry Potter on 2022/8/20.
//

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int result = 0;
        while(l < r){
            int Area = min(height[l], height[r]) * (r - l);
            result = max(Area, result);
            if(height[l] <= height[r]){
                l++;
            }
            else {
                r--;
            }
        }
        return result;
    }
};

