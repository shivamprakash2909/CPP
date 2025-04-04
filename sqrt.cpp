#include <iostream>

using namespace std;
int sqrtInt(int k)
{

    int s = 0, e = k, ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int sq = mid * mid;

        if (sq == k)
        {
            return mid;
        }
        else if (sq < k)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double PreciseRoot(int n, int precision, int tempsol)
{
    double ans = tempsol;
    double f = 1;

    for (int i = 0; i < precision; i++)
    {
        f = f / 10;
        for (double j = tempsol; j * j < n; j = j + f)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int k;
    cout << "Ent k\n";
    cin >> k;
    int tempsol = sqrtInt(k);

    cout << "sqrt of k is : " << PreciseRoot(k, 3, tempsol);

    return 0;
}