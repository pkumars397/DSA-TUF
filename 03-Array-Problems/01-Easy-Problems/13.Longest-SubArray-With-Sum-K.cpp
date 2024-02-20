#include <bits/stdc++.h>
using namespace std;

// 1.Brute Forces (Applied for any type of elements i.e +ve,-ve,0) O(n3) SO(1)
int getLongestSubarray1(vector<int> &a, long long k)
{
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++)
    { // starting index
        for (int j = i; j < n; j++)
        { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            long long s = 0;
            for (int K = i; K <= j; K++)
            {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

// O(n2) Better Approach

int getLongestSubarray2(vector<int> &a, long long k)
{
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++)
    {                    // starting index
        long long s = 0; // Sum variable
        for (int j = i; j < n; j++)
        { // ending index
            // add the current element to
            // the subarray a[i...j-1]:
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

// Optimal Approach

//  This will work completely for negatives ,0 ,positive,but partial for the postives and zero.

int getLongestSubarray3(vector<int> &A, long long K)
{
    int sum = 0, maxLen = 0;
    int N = A.size();
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sum == K)
            maxLen = max(maxLen, i + 1);
        int req = sum - K;
        if (m.find(req) != m.end())
            maxLen = max(maxLen, i - m[req]);

        if (m.find(sum) == m.end())
            m[sum] = i;
    }
    return maxLen;
}

// For positives
int getLongestSubarray4(vector<int> &A, long long k)
{
    int n = A.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = A[0];
    int maxLen = 0;
    while (right < n)
    {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k)
        {
            sum -= A[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n)
            sum += A[right];
    }

    return maxLen;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray4(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}