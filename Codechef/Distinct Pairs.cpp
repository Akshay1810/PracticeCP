// Problem link: https://www.codechef.com/problems/SAVKONO

#include <bits/stdc++.h>
typedef long long ll;
#define F first
#define S second
#define pb push_back
#define pi pair<int, int>
#define vi vector<int>
#define mp make_pair
#define endl "\n"
#define mod 1000000007b
#define loop(s, e) for (int i = s; i < e; i++)
#define looprev(s, e) for (int i = s; i >= e; i--)
using namespace std;

// >>>>>>>>>>>>>>>>>>>>>>comparator funtion for sorting maps according to value(not key)<<<<<<<<<<<<<<<<<<<<<<<<
// bool comp(const pair<string, int> &a, const pair<string, int> &b)
// {
// 	if (a.second == b.second) return a.first > b.first; //ascending order
// 	return a.second < b.second; //descending order
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(mp(x, i));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(mp(x, i));
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < m; i++)
    {
        cout << a[0].second << " " << b[i].second << endl;
    }
    for (int i = 1; i < n; i++)
    {
        cout << a[i].second << " " << b[m - 1].second << endl;
    }
}