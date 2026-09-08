class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        // vector<int> even;
        // vector<int> odd;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     if(nums[i] % 2 == 0){
        //         even.push_back(nums[i]);
        //     }else{
        //         odd.push_back(nums[i]);
        //     }
        // }
        // int e = 0;
        // int o = 1;
        // int i = 0;
        // while(i != even.size()){
        //     nums[e] = even[i];
        //     nums[o] = odd[i];
        //     e = e+2;
        //     o = o + 2;
        //     i++;
        // }
        int i = 0;
        int j = 1;
        while(i < nums.size() && j < nums.size()){
            if(nums[i] % 2 == 0 && nums[j] % 2 != 0){
                i += 2;
                j += 2;
            }else if(j < nums.size() && nums[j] % 2 == 0){
                if(nums[i] % 2 != 0){
                    swap(nums[i],nums[j]);
                    i+= 2;
                    j+= 2;
                }else{
                    i += 2;
                    if(i < nums.size() && nums[i] % 2 != 0){
                        swap(nums[i] , nums[j]);
                    }
                }
            }else{
                if(nums[j] % 2 == 0){
                    swap(nums[i] , nums[j]);
                }else{
                    j += 2;
                    if(j < nums.size() && nums[j] % 2 == 0){
                        swap(nums[i],nums[j]);
                    }
                }
            }
        }
        return nums;
    }
};