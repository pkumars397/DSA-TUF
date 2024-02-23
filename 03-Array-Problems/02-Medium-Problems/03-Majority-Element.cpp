#include <bits/stdc++.h>
using namespace std;

// 1.Brute Force O(n2)
int majorityElement1(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (count > (nums.size() / 2))
            return nums[i];
    }
    return -1;
}

// 2.Better Approach O(nlogn) S(n)
int majorityElement2(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > (nums.size() / 2))
            return it.first;
    }
    return -1;
}

// 3.Optimal Approach O(n)
int majorityElement3(vector<int> &nums)
{
    int count = 0;
    int el;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            el = nums[i];
        }
        else if (nums[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (el == nums[i])
            count1++;
    }
    if (count1 > (nums.size() / 2))
        return el;
    return -1;
}

int main()
{
    vector<int> v = {2,
                     2,
                     1,
                     1,
                     1,
                     2,
                     2};
    cout<<majorityElement3(v);
    return 0;
}