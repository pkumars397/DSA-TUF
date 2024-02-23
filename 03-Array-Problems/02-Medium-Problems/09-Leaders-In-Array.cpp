#include <bits/stdc++.h>

using namespace std;
//  Brute Force O(N2)
vector<int> leader1(vector<int> &a, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
                leader = false;
        }
        if (leader)
            ans.emplace_back(a[i]);
    }
    return ans;
}

// Optimal Way
vector<int> leader2(vector<int> &a, int n)
{
    int maxi = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
            maxi = a[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> v = {16,
                     17,
                     4,
                     3,
                     5,
                     2};
    vector<int> ans = leader2(v, 6);
    for (auto it : ans)
        cout << it << endl;
    return 0;
}