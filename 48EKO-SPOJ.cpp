// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &trees, int n, int height)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, trees[i]);
    }

    int s = 0;
    int e = maxi;
    int result = 0;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (trees[i] > mid)
            {
                ans += (trees[i] - mid);
            }
        }

        if (ans >= height)
        {
            result = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return result;
}

int main()
{
    vector<int> trees;
    int n;
    int height;

    cin >> n >> height;

    int inp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        trees.push_back(inp);
    }

    int ans = BinarySearch(trees, n, height);
    cout << ans;
    return ans;  // <-- 🟡 Not an error, but unnecessary
}
