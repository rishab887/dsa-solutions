class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while(i < nums.size() && j < nums.size()){
            if(i % 2 == 0){
                if(nums[i] % 2 == 0){
                    i+=2;
                }else{
                    if(nums[j] % 2 == 0){
                        swap(nums[i],nums[j]);
                    }else{
                        j+=2;
                    }
                }
            }else if(j % 2 != 0){
                if(nums[j] % 2 != 0){
                    j += 2;
                }else{
                    if(nums[i] %2 != 0){
                        swap(nums[j],nums[i]);
                        
                    }else{
                        i+=2;
                    }
                }
            }else{
                i+=2;
                j+=2;
            }
        }
        return nums;
    }
};