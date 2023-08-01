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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("whereami.in", "r", stdin);
    // the following line creates/overwrites the output file
    freopen("whereami.out", "w", stdout);
    ll t;
    cin >> t;
    string s;
    cin >> s;
    ll ans = t;
    for (ll i = 1; i < t; i++)
    {
        set<string> st;
        for (ll j = 0; j <= t - i; j++)
        {
            st.insert(s.substr(j, i));
        }
        if (st.size() == (t - i + 1))
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}