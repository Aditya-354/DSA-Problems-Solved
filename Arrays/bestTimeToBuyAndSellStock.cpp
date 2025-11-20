#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    // buying stock must be < selling stock to make profit
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices){
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    // vector<int> prices = {7,6,4,3,1};
    int profit = s.maxProfit(prices);
    cout << profit;
    return 0;
}