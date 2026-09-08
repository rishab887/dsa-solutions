class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        int e = 0;
        int o = 1;
        int i = 0;
        while(i != even.size()){
            nums[e] = even[i];
            nums[o] = odd[i];
            e = e+2;
            o = o + 2;
            i++;
        }
        return nums;
    }
};