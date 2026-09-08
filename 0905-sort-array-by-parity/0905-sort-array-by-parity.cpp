class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int> even;
        // vector<int> odd;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     if(nums[i]%2 == 0){
        //         even.push_back(nums[i]);
        //     }else{
        //         odd.push_back(nums[i]);
        //     }
        // }
        // for(int i = 0 ; i < even.size() ; i++){
        //     nums[i] = even[i];
        // }
        // for(int i = even.size() ; i < even.size() + odd.size() ; i++){
        //     nums[i] = odd[i - even.size()];
        // }
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            if(nums[right] % 2 == 0 && nums[left] % 2 != 0){
                swap(nums[left],nums[right]);
                right--;
                left++;
            }else if(nums[right] % 2 == 0 &&  nums[left] % 2 == 0){
                left++;
            }else if(nums[left] % 2 != 0){
                right--;
            }else{
                right--;
                left++;
            }
        }
        return nums;
    }
};