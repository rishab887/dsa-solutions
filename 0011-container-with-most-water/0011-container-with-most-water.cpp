class Solution {
public:
    int maxArea(vector<int>& height) {
        int left  = 0;
        int right = height.size() - 1;
        int width = -1;
        int heigt = -1;
        long long area = 0;
         while(left <= right){
            width = right - left;
            heigt = min(height[left],height[right]);
            
            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
            area = max(area, 1LL*width * heigt);
         }
         return area;
    }
};