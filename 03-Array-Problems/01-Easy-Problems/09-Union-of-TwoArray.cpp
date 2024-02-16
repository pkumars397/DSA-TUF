#include <bits/stdc++.h>
using namespace std;

// Brute force
vector<int> u1(int a1[], int a2[], int s1, int s2)
{
    set<int> s;
    for (int i = 0; i < s1; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < s2; i++)
    {
        s.insert(a2[i]);
    }
    vector<int> ans;
    for (auto it : s)
        ans.push_back(it);
    return ans;
}

// Optimal Method Two Pointer approach!!

vector<int> u2(int a1[], int a2[], int s1, int s2)
{
    int p1 = 0;
    int p2 = 0;
    vector<int> ans;
    while (p1 < s1 && p2 < s2)
    {
        if (a1[p1] <= a2[p2])
        {
            if (ans.size() == 0 || ans.back() != a1[p1])
            {
                ans.push_back(a1[p1]);
            }
            p1++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != a2[p2])
            {
                ans.push_back(a2[p2]);
            }
            p2++;
        }
    }

    while (p1 < s1)
    {
        if (ans.size() == 0 || ans.back() != a1[p1])
        {
            ans.push_back(a1[p1]);
            p1++;
        }
    }

    while (p2 < s2) // If any elements left in arr2
    {
        if (ans.size() == 0 || ans.back() != a2[p2])
            ans.push_back(a2[p2]);
        p2++;
    }
    return ans;
}

int main()
{
    int a1[5] = {1, 1, 2, 4, 5};
    int a2[5] = {2, 3, 5, 6, 7};

    vector<int> ans = u2(a1, a2, 5, 5);
    for (auto it : ans)
        cout << it;
    return 0;
}