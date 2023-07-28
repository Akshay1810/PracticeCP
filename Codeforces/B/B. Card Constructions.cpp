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
// bool comp(const pair<string, long long> &a, const pair<string, long long> &b)
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
int lowww(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        int ans = 0;
        int l = -1, r = 1e5 + 1;
        while (r - l > 1)
        {
            int mid = l + (r - l) / 2;
            if ((mid * (mid - 1)) + ((mid - 1) * (mid - 2)) / 2 <= n)
            {
                ans = (mid * (mid - 1)) + ((mid - 1) * (mid - 2)) / 2;
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        return ans;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 2)
        {
            cout << 0 << endl;
        }
        else if (n <= 3)
        {
            cout << 1 << endl;
        }
        else
        {
            int cnt = 0;
            while (n > 0)
            {
                int ans = lowww(n);
                if (ans != 0)
                {
                    n = n - ans;
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            cout << cnt << endl;
        }
    }
}