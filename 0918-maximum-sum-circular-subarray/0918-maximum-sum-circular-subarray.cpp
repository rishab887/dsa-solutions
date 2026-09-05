class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int sum  = 0;
        int sum_min = 0;
        for(int i = 0 ; i< n ; i++){
            total_sum += nums[i];
            sum += nums[i];
            maxi = max(maxi , sum);
        
            if(sum < 0){
                sum = 0;
            }

            sum_min += nums[i];
            mini = min(mini , sum_min);
            
            if(sum_min > 0){
                sum_min = 0;
            }
        }
        if(maxi < 0){
            return maxi;
        }
        int circular_sum = total_sum - mini;
        return max(maxi , circular_sum);
    }
};