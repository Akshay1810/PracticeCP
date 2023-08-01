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
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int cap, mil;
    vector<pair<int, int>> state;
    for (int i = 0; i < 3; i++)
    {
        cin >> cap >> mil;
        state.push_back(mp(cap, mil));
    }
    for (int i = 0; i < 33; i++)
    {
        int val1 = state[1].first - (state[0].second + state[1].second);
        if (val1 < 0)
        {
            state[1].second = state[1].first;
            state[0].second = abs(val1);
        }
        else
        {

            state[1].second = state[0].second + state[1].second;
            state[0].second = 0;
        }
        val1 = state[2].first - (state[1].second + state[2].second);
        if (val1 < 0)
        {
            state[2].second = state[2].first;
            state[1].second = abs(val1);
        }
        else
        {
            state[2].second = state[1].second + state[2].second;
            state[1].second = 0;
        }
        val1 = state[0].first - (state[0].second + state[2].second);
        if (val1 < 0)
        {
            state[0].second = state[0].first;
            state[2].second = abs(val1);
        }
        else
        {
            state[0].second = state[0].second + state[2].second;
            state[2].second = 0;
        }
    }
    int val1 = state[1].first - (state[0].second + state[1].second);
    if (val1 < 0)
    {
        state[1].second = state[1].first;
        state[0].second = abs(val1);
    }
    else
    {
        state[1].second = state[0].second + state[1].second;
        state[0].second = 0;
    }
    for (auto val : state)
    {
        cout << val.second << endl;
    }
}