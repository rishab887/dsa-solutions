class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int index = -1;
        vector<int> temp;
       for(int i = 0 ; i < nums1.size() ; i++){
        for(int j = 0 ; j < nums2.size() ; j++){
            if(nums1[i] == nums2[j]){
                index = j ;
                break;
            }
        }
       
       bool found = false;
       for(int i = index + 1; i < nums2.size() ; i++){
        if(nums2[i] > nums2[index]){
            temp.push_back(nums2[i]);
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