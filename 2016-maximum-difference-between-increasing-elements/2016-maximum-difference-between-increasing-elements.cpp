class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int max_diff = INT_MIN;
        int mini = INT_MAX;
        for( j = 0 ; j < nums.size(); j++){
            if(nums[i] < nums[j] && i < j){
                max_diff = max(max_diff , nums[j] - mini);
            }
            if(nums[j] < nums[i]){
                i = j;
            }
            mini = min(mini , nums[i]);
        }
        if(max_diff < 0){
            return -1;
        }
        return max_diff;
    }
};