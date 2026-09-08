class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < even.size() ; i++){
            nums[i] = even[i];
        }
        for(int i = even.size() ; i < even.size() + odd.size() ; i++){
            nums[i] = odd[i - even.size()];
        }
        return nums;
    }
};