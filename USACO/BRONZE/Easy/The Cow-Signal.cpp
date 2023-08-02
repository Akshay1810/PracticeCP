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
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int M, N, K;
    cin >> M >> N >> K;
    char arr[M][N];
    char x;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            arr[i][j] = x;
        }
    }
    for (int i = 0; i < M; i++)
    {
        int k2 = K;
        while (k2--)
        {
            for (int j1 = 0; j1 < N; j1++)
            {
                for (int k = 0; k < K; k++)
                {
                    cout << arr[i][j1];
                }
            }
            cout << endl;
        }
    }
}