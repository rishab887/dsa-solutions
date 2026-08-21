class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> result;
        helper(nums , temp , result , 0 , nums.size());
        return result;
    }
    void helper(vector<int>& nums , vector<int>&temp , vector<vector<int>>& result , int i , int n){
        if(i == n){
            result.push_back(temp);
            return;
        }
        //not take
        helper(nums , temp , result , i+1 , n);
        temp.push_back(nums[i]);
        helper(nums , temp , result , i+1 , n);
        temp.pop_back();
    }
};