//? Brute Force
//! TC: O(n^2) SC: O(1)

//? 2. If profit is negative, then we can't make any profit, so we reset the left pointer to the right pointer.
//! TC: O(n) SC: = O(1)
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1298334924

int maxProfit(vector<int>& prices) {
    int maxi = 0, l = 0, r = 0;

    while (r < prices.size()){
        if (prices[r] > prices[l])
            maxi = max(maxi, prices[r] - prices[l]);
        else
            l = r;
            
        r++;
    }
    return maxi;
}