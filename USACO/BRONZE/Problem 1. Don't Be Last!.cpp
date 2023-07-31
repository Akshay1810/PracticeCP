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
// >>>>>>>>>>>>>>>>>>>>>>comparator funtion for sorting maps according to value(not key)<<<<<<<<<<<<<<<<<<<<<<<<
// bool comp(const pair<string, int> &a, const pair<string, int> &b)
// {
// 	if (a.second == b.second) return a.first > b.first; //ascending order
// 	return a.second < b.second; //descending order
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// int check_perfect_square(long long n){
//     double sqrt_n = sqrt(n);
//     if(sqrt_n == int(sqrt_n)){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
vector<string> cn = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("notlast.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("notlast.out", "w", stdout);
    ll t;
    cin >> t;
    string s;
    ll x;
    map<string, ll> mp;
    for (ll i = 0; i < cn.size(); i++)
    {
        mp[cn[i]] = 0;
    }
    for (ll i = 0; i < t; i++)
    {
        cin >> s;
        cin >> x;

        mp[s] += x;
    }
    ll mini = 1e5;
    for (auto it : mp)
    {
        mini = min(mini, it.second);
    }
    ll minisec = 1e5;
    for (auto it : mp)
    {
        if (it.second > mini)
        {
            minisec = min(minisec, it.second);
        }
    }
    ll cnt = 0;
    string ans;
    for (auto it : mp)
    {
        if (it.second == minisec)
        {
            ans = it.first;
            cnt++;
        }
    }
    if (cnt == 1)
    {
        cout << ans << endl;
    }
    else if (cnt > 1 || cnt == 0)
    {
        cout << "Tie" << endl;
    }
}