class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int sum = 0;
        for(int j = 0 ; j < prices.size(); j++){
            if(prices[i] < prices[j] && i < j){
                sum += (prices[j] - prices[i]);
                i = j;
            }
            if(prices[j] < prices[i]){
                i = j;
            }
        }
        return sum;
    }
};