#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        profit = prices[i] - mini;
        maxProfit = max(profit, maxProfit);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> v = {7,
                     1,
                     5,
                     3,
                     6,
                     4};
    int ans = maxProfit(v);
    cout << ans;
    return 0;
}