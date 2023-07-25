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
        int N, Z;
        cin >> N >> Z;
        priority_queue<int> pq;

        for (int i = 0; i < N; i++)
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        int cnt = 0;

        while (Z > 0)
        {
            int sol = pq.top();
            pq.pop();
            if (sol == 0)
                break;
            Z -= sol;
            sol /= 2;
            cnt++;
            pq.push(sol);
        }

        if (Z <= 0)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << "Evacuate" << endl;
        }
    }
}