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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        set<pair<int, int>> s;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            s.insert(mp(x, y));
        }

        long long int count = 0;
        for (auto it : s)
        {
            int x = it.first;
            int y = it.second;
            if (s.find({x + 1, y}) == s.end())
                count += 1;
            if (s.find({x, y + 1}) == s.end())
                count += 1;
            if (s.find({x, y - 1}) == s.end())
                count += 1;
            if (s.find({x - 1, y}) == s.end())
                count += 1;
        }
        cout << count << endl;
    }
}