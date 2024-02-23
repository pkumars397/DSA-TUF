#include <bits/stdc++.h>
using namespace std;

vector<int> printSubarray(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0;
    int startIndex = -1, endIndex = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
            startIndex = i;
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            endIndex = i;
        }
        if (sum < 0)
            sum = 0;
    }
    return {startIndex, endIndex};
}

int main()
{
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> ans = printSubarray(v);
    cout << ans[0] << ans[1];
    return 0;
}