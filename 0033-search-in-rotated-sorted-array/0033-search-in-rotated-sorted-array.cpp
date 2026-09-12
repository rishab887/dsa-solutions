class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            if(nums[low] == target){
                return low;
            }else if(nums[high] == target){
                return high;
            }
            int mid = (low + high)/2;
            if(nums[mid] == target){
                return mid;
            }

            //left part search 
            if(low <= mid && nums[low] != target){
                if(nums[low] == target){
                    return low;
                }
                low++;
            }
            //right part search 
            if(high > mid && nums[high] != target){
                if(nums[high] == target){
                    return high;
                }
                high--;
            }
        }
        return -1;
    }
};