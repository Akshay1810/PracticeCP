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
    int n, a;
    cin >> n >> a;
    vector<int> v(n + 1);
    v[0] = 0;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    if (a <= n / 2)
    {
        int i = 1, j = a + a - 1;
        int cnt = 0;
        while (i != j)
        {
            if (v[i] == v[j] && v[i] == 1)
            {
                cnt++;
                cnt++;
            }
            i++;
            j--;
        }
        if (v[a] == 1)
        {
            cnt++;
        }
        for (int i = 2 * a; i <= n; i++)
        {
            if (v[i] == 1)
                cnt++;
        }
        cout << cnt << endl;
    }
    else
    {
        int i = a - (n - a), j = n;
        int cnt = 0;
        while (i != j)
        {
            if (v[i] == v[j] && v[i] == 1)
            {
                cnt++;
                cnt++;
            }
            i++;
            j--;
        }
        if (v[a] == 1)
        {
            cnt++;
        }
        for (int i = 0; i < 2 * a - n; i++)
        {
            if (v[i] == 1)
                cnt++;
        }
        cout << cnt << endl;
    }
}