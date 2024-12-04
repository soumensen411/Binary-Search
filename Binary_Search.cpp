// Jay shree krishna
#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
bool search(vector<int> &v, int l, int r, int q)
{
    bool flag = false;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == q)
        {
            flag = true;
            break;
        }
        else if (v[mid] > q)
        {
            r = mid - 1;
        }
        else if (v[mid] < q)
        {
            l = mid + 1;
        }
    }
    if (flag)
    {
        return 1;
    }
    else
        return 0;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;

    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        if (search(v, l, r, q))
        {
            cout << "found\n";
        }
        else
            cout << "not found\n";
    }
}
int main()
{
    inputOutput();
    solve();
    return 0;
}
