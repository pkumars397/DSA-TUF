#include <bits/stdc++.h>
using namespace std;

// 1.Brute Force O(n2)
int maxSubArray1(vector<int> &nums)
{
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
// Optimal Approach Kadane algo
int maxSubArray2(vector<int> &nums)
{
    int sum = 0, maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(sum, maxi);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maxSubArray2(v);
    cout << maxSum;
    return 0;
}