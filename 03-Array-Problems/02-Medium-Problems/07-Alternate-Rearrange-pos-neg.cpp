#include <bits/stdc++.h>
using namespace std;

// Brute Force O(2n) S(n)
vector<int> rearrangeArray1(vector<int> &nums)
{
    int n = nums.size();
    vector<int> posi;
    vector<int> negi;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
            posi.emplace_back(nums[i]);
        else
            negi.push_back(nums[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        nums[2 * i] = posi[i];
        nums[2 * i + 1] = negi[i];
    }
    return nums;
}
// Optimal ,in one pass ,O(N) S(N)
vector<int> rearrangeArray2(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {3,
                     1,
                     -2,
                     -5,
                     2,
                     -4};
    vector<int> ans = rearrangeArray2(v);
    for (auto it : ans)
        cout << it << endl;
    return 0;
}