#include <bits/stdc++.h>
using namespace std;

// Brute Force
void nextPermutation1(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end());
}

// Optimal
void nextPermutation2(vector<int> &nums)
{
    int n = nums.size();
    int pivotIndex = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i - 1] < nums[i])
        {
            pivotIndex = i - 1;
            break;
        }
    }
    if (pivotIndex == -1)
        return reverse(nums.begin(), nums.end());
    for (int i = n - 1; i > pivotIndex; i--)
    {
        if (nums[i] > nums[pivotIndex])
        {
            swap(nums[i], nums[pivotIndex]);
            break;
        }
    }
    reverse(nums.begin() + pivotIndex + 1, nums.end());
}

int main()
{
    vector<int> v = {1,
                     2,
                     3};
    nextPermutation2(v);
    for (auto it : v)
        cout << it << endl;
    return 0;
}