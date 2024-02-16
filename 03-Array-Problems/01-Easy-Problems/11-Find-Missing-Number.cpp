#include <bits/stdc++.h>
using namespace std;

// 1.Brute Force ,using linear search O(n^2),O(1)
int missingNumber1(vector<int> &nums)
{
    for (int i = 0; i <= nums.size(); i++)
    {
        int flag = 0;
        for (auto it : nums)
        {
            if (i == it)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return i;
    }
    return -1;
}

// 2.Better Hashmap or hash Array. O(n) ,Space O(n)
int missingNumber2(vector<int> &nums)
{
    // better
    int n = nums.size();
    map<int, int> m;
    for (int i = 0; i <= n; i++)
    {
        m[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        m[nums[i]] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (m[i] == 0)
            return i;
    }
    return 0;
}

// 3.Optimal ,using Sum method and Xor ,O(n),O(1);
int missingNumber3(vector<int> &nums)
{
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        x ^= i;
        x ^= nums[i];
    }
    x ^= nums.size();
    return x;
}

int missingNumber4(vector<int> &nums)
{
    int sum = 0, n = nums.size();
    int totalSum = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    return totalSum - sum;
}

int main()
{
    vector<int> v = {0, 2, 3};
    cout << missingNumber4(v);
    return 0;
}