class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int l=0,h=height.size()-1;
        while(l<h){
            area = max(area, min(height[l], height[h])*(h-l));
            if(height[l]<height[h]) l++;
            else h--;
        }
        return area;
    }
};