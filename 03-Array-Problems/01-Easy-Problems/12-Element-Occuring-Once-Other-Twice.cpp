#include <bits/stdc++.h>
using namespace std;

int singleNumber1(vector<int> &nums)
{
    // Brute Force
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
                count++;
        }
        if (count == 1)
            return nums[i];
    }
    return -1;
}

int singleNumber2(vector<int> &nums)
{
    //  Better  ,Time complexity ,O(nlogm)(normal map ,or ordered map,keys stored in sorted manner,O(logn)) or O(n^2)--if unorderedmap(keys are not sorted,worst case O(n))
    int n = nums.size();
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }

    for (auto it : m)
    {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}

int singleNumber3(vector<int> &nums)
{
    // Optimal ,
    int n = nums.size();
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x ^= nums[i];
    }
    return x;
}

int main()
{
    vector<int> v = {1, 1, 2, 3, 3, 4, 4};
    cout << singleNumber3(v);
    return 0;
}