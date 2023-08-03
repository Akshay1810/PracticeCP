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

void setIO(string s)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    setIO("lostcow");
    int x, y;
    cin >> x >> y;

    vector<int> zigzag;

    if (x == y)
    {
        cout << 0 << endl;
    }
    else if (x < y)
    {
        int dist = 1;

        while (x + dist < y)
        {
            zigzag.pb(x + dist);
            dist *= -2;
        }

        zigzag.pb(x + dist);

        int ans = 1;

        for (int i = 0; i < zigzag.size() - 1; i++)
        {
            ans += abs(zigzag[i] - zigzag[i + 1]);
        }
        ans -= (zigzag[zigzag.size() - 1] - y);
        cout << ans << endl;
    }
    else
    {
        int dist = 1;

        while (x + dist > y)
        {
            zigzag.pb(x + dist);
            dist *= -2;
        }

        zigzag.pb(x + dist);

        int ans = 1;

        for (int i = 0; i < zigzag.size() - 1; i++)
        {
            ans += abs(zigzag[i] - zigzag[i + 1]);
        }
        ans -= (y - zigzag[zigzag.size() - 1]);
        cout << ans << endl;
    }
}