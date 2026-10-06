class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int j = 0;
        
        vector<int> temp;
        for(int i = 0 ; i < nums1.size() ; i++){
            bool found = false;
            int index = 0;
            for(j = 0 ; j < nums2.size() ; j++){
                if(nums1[i] == nums2[j]){
                    index = j;
                    break;
                }
            }
            for(int k = index + 1 ; k < nums2.size(); k++){
                if(nums2[k] > nums2[index]){
                    temp.push_back(nums2[k]);
                    found = true;
                    break;
                }
            }
            if(!found){
                temp.push_back(-1);
            }
        }
        return temp;
    }
};