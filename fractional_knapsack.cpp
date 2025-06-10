#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double fractionalKnapsack(vector<int> &val, vector<int> &wt, int capacity)
{
    double ans = 0.0;
    int n = val.size();
    vector<pair<double, int>> ratio;

    for (int i = 0; i < n; i++)
    {
        ratio.push_back({(double)val[i] / wt[i], i});
    }
    sort(ratio.begin(), ratio.end(), greater<pair<double, int>>());
    cout << "after sorting\n";

    for (int i = 0; i < n; i++)
    {
        int k = ratio[i].second;
        if (capacity < wt[k])
        {
            ans += (double)val[k] * capacity / wt[k];
            cout << ans << " ";
            break;
        }
        ans += (double)val[k];
        cout << ans << " ";
        capacity -= wt[k];
    }
    return ans;
}

int main()
{
    vector<int> val = {5, 7, 2, 7, 10};
    vector<int> wt = {9, 6, 3, 7, 3};
    int capacity = 24;

    cout << fractionalKnapsack(val, wt, capacity) << endl;
    return 0;
}