#include <bits/stdc++.h>
typedef long long ll;
#define F first
#define S second
#define pb push_back
#define pi pair<long long, long long>
#define vi vector<long long>
#define mp make_pair
#define endl "\n"
#define mod 1000000007b
#define loop(s, e) for (long long i = s; i < e; i++)
#define looprev(s, e) for (long long i = s; i >= e; i--)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> v(101);
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int i = prev + 1; i <= x + prev; i++)
        {
            v[i] = y;
        }
        prev += x;
    }
    int prev1 = 0;
    vector<int> cow(101);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int i = prev1 + 1; i <= x + prev1; i++)
        {
            cow[i] = y;
        }
        prev1 += x;
    }
    int maxi = 0;
    for (int i = 1; i <= 100; i++)
    {
        maxi = max(cow[i] - v[i], maxi);
    }
    cout << maxi << endl;
}