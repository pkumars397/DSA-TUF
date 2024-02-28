#include <bits/stdc++.h>
using namespace std;

// 1>> Brute Force O(n2)
bool linearSearch(vector<int> &a, int num)
{
    int n = a.size(); // size of array
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestConsecutive1(vector<int> &a)
{
    int n = a.size(); // size of array
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int cnt = 1;
        // search for consecutive numbers
        // using linear search:
        while (linearSearch(a, x + 1) == true)
        {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

// 2>> Better Approach O(nlogn)
int longestConsecutive2(vector<int> &a)
{
    sort(a.begin(), a.end());
    int lastSmaller;
    int count = 0;
    int longest = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller)
        {
            lastSmaller = a[i];
            count = 1;
        }
        longest = max(longest, count);
    }
    return longest;
}

// Optimal O(n) S(n)
int longestConsecutive3(vector<int> &a)
{
    set<int> s;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }
    int ans = 0;
    for (auto it : s)
    {
        if (s.find(it - 1) == s.end())
        {
            int count = 1;
            while (s.find(it + 1) != s.end())
            {
                count++;
                it += 1;
            }
            ans = max(count, ans);
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {0,
                     3,
                     7,
                     2,
                     5,
                     8,
                     4,
                     6,
                     0,
                     1};
    cout << longestConsecutive3(v);
    return 0;
}