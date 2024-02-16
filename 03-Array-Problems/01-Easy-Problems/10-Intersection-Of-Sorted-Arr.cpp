#include <bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> intersect1(vector<int> v1, vector<int> v2, int s1, int s2)
{
    vector<int> visited(s2);
    vector<int> ans;
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (v2[j] == v1[i] && visited[j] == 0)
            {
                ans.push_back(v1[i]);
                visited[j] = 1;
                break;
            }

            if (v2[j] > v1[i])
                break;
        }
    }
    return ans;
}

// Optimal Solution
vector<int> intersect2(vector<int> v1, vector<int> v2)
{
    int n = v1.size();
    int m = v2.size();
    int k = 0;
    int l = 0;
    vector<int> ans;
    while (k < n && l < m)
    {
        if (v1[k] < v2[l])
        {
            k++;
        }
        else if (v1[k] > v2[l])
        {
            l++;
        }
        else
        {
            ans.push_back(v1[k]);
            k++;
            l++;
        }
    }

    return ans;
}
int main()
{
    vector<int> v1 = {1,
                      2,
                      2,
                      3,
                      3,
                      4,
                      5,
                      6};
    vector<int> v2 = {2,
                      3,
                      3,
                      5,
                      6,
                      6,
                      7};
    vector<int> answer = intersect2(v1, v2);
    for (auto it : answer)
        cout << it << endl;
    return 0;
}