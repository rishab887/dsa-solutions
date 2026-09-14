class Solution {
public:
    void merging(vector<int> & arr , int low , int mid , int high){
        int i = low ;
        int j = mid + 1;
        vector<int> temp;

        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            }else{
                temp.push_back(arr[j++]);
            }
        }
        while(i <= mid){
            temp.push_back(arr[i++]);
        }
        while(j <= high){
            temp.push_back(arr[j++]);
        }

        for(int i = low  ; i <= high ; i++){
            arr[i] = temp[i - low];
        }
    }
    void mergeSort(vector<int> & arr , int low , int high){
        if(low < high){
            int mid = (low + high)/2;
            mergeSort(arr , low , mid);
            mergeSort(arr , mid + 1 , high);
            merging(arr , low , mid , high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        mergeSort(nums , low , high );
        return nums;
    }
};