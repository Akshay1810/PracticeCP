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
vector<int> peb(4);
vector<int> peb2(4);
vector<int> peb3(4);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("shell.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("shell.out", "w", stdout);
    int n;
    cin >> n;
    peb[1] = 1;
    int cg = 0;
    vector<tuple<int, int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_tuple(a, b, c));
    }
    int cnt1 = 0;
    int store;
    for (int i = 0; i < v.size(); i++)
    {
        swap(peb[get<0>(v[i])], peb[get<1>(v[i])]);
        if (peb[get<2>(v[i])] == 1)
        {
            cnt1++;
        }
    }
    int cnt2 = 0;
    peb2[2] = 1;
    for (int i = 0; i < v.size(); i++)
    {
        swap(peb2[get<0>(v[i])], peb2[get<1>(v[i])]);
        if (peb2[get<2>(v[i])] == 1)
        {
            cnt2++;
        }
    }
    int cnt3 = 0;
    peb3[3] = 1;
    for (int i = 0; i < v.size(); i++)
    {
        swap(peb3[get<0>(v[i])], peb3[get<1>(v[i])]);
        if (peb3[get<2>(v[i])] == 1)
        {
            cnt3++;
        }
    }
    int ans = (cnt1 >= cnt2 ? (cnt1 >= cnt3 ? cnt1 : cnt3) : (cnt2 >= cnt3 ? cnt2 : cnt3));
    cout << ans << endl;
}