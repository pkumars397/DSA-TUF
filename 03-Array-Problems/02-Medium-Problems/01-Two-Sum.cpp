#include <bits/stdc++.h>
using namespace std;

// 1.Brute Force Method
vector<int> twoSum1(vector<int> &a, int target)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

// 2.Better Approach
vector<int> twoSum2(vector<int> &nums, int target)
{
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int req = target - nums[i];
        if (mpp[req])
        {
            return {i, mpp[req]};
        }
        mpp[nums[i]] = i;
    }
    return {-1, -1};
}

// 3.Optimal Approach: only for return yes or no,if want index then optimal is hashing one.
vector<string> twoSum3(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    sort(nums.begin(), nums.end());
    int sum;
    while (left < right)
    {
        sum = nums[left] + nums[right];
        if (sum < target)
            left++;
        else if (sum > target)
            right--;
        else
            return {"Yes", "Yes"};
    }
    return {"No", "No"};
}

int main()
{
    vector<int> v = {2, 7, 5, 9};
    int target = 9;
    vector<string> ans = twoSum3(v, target);
    cout << ans[0] << ans[1];
    return 0;
}