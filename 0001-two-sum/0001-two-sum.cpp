class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> mp;
      vector<int> temp;
      for(int i = 0 ; i < nums.size() ; i++){
        int need = target - nums[i];
        if(mp.find(need) != mp.end()){
            temp.push_back(i);
            temp.push_back(mp[need]);
            break;
        }
        mp[nums[i]] = i;
      }
      return temp;
    }
};