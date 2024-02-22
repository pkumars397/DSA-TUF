#include <bits/stdc++.h>
using namespace std;

// 1.Brute Force
void sortColors1(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

// 2.Better
void sortColors2(vector<int> &nums)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        if (*i == 0)
            count0++;
        if (*i == 1)
            count1++;
        else
            count2++;
    }
    for (auto it = nums.begin(); it != nums.begin() + count0; it++)
    {
        *it = 0;
    }
    for (auto it = nums.begin() + count0; it != nums.begin() + count0 + count1; it++)
    {
        *it = 1;
    }
    for (auto it = nums.begin() + count1 + count0; it != nums.end(); it++)
    {
        *it = 2;
    }
}

// 3.Optimal Dutch Flag (0 to low-1>> 0 ,low to mid-1>>1,mid to high>>unsorted,high+1 to end>>2)
void sortColors3(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++, mid++;
        }
        else if (nums[mid] == 1)
            mid++;
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 2, 0, 1, 2};
    sortColors3(nums);
    for (auto it : nums)
        cout << it << endl;
    return 0;
}