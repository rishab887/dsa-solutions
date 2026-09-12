class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = INT_MIN;
        int i =0;
        int j = 0;
        for(j = 0 ; j < nums.size() ; j++){
            if(nums[j] == 1 && nums[i] == 1){
                maxi = max(maxi , j - i + 1);
            }else if(nums[j] != 1){
                i = j;
            }
            if(nums[i] != 1){
                i++;
            }
        }
        if(maxi > 0){
            return maxi;
        }
        return 0;
    }
};