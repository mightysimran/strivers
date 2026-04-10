#include <bits/stdc++.h>
using namespace std;

int fV(vector<int> v, int x)
{
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] <= x)
        {
            ans = v[mid];  // potential floor
            low = mid + 1; // search right
        }
        else
        {
            high = mid - 1; // search left
        }
    }
    return ans;
}

int cV(vector<int> v, int x)
{
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] >= x)
        {
            ans = v[mid];   // potential ceil
            high = mid - 1; // search left
        }
        else
        {
            low = mid + 1; // search right
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << fV(v, 25);
    cout << "\n";
    cout << cV(v, 25);
    return 0;
}

// Problem: floor and ceil in a sorted array
// floor -> largest val in array <= x
// ceil -> smallest val in array >= x -> lower bound