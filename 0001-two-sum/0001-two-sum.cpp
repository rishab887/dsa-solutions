class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>temp;
        unordered_map<int, int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            int need = target - nums[i] ;
            if(mp.find(need) != mp.end()){
              temp.push_back(mp[need]);
              temp.push_back(i);
            }
            mp[nums[i]] =i;
        }  
      return temp;
    }
};