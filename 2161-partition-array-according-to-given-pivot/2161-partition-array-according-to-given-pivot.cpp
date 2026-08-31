class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> equal;
        vector<int> greater;
       for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] < pivot){
                smaller.push_back(nums[i]);
            }else if(nums[ i] == pivot){
                equal.push_back(nums[i]);
              
            }else{
                greater.push_back(nums[i]);
            }
        }
        int i =0;
        for(int x : smaller){
            nums[i++] = x;
        }
        for(int x : equal){
            nums[i++] = x;
        }
        for(int x : greater){
            nums[i++] = x;
        }
        return nums;
    }
};