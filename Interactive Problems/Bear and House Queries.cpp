// https://www.codechef.com/problems/QHOUSE
// mostly solved by binary search
// input format ka bhi dhyan rakho "? " there was gap after ?

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

bool ask(int x, int y)
{
    cout << "? " << x << " " << y << endl;
    string s;
    cin >> s;
    return (s == "YES");
}

int main()
{
    int side, height, base;
    int l = -1, r = 1001;
    int half_side;
    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        if (ask(mid, 0))
        {
            half_side = mid;
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    side = 2 * (half_side);
    l = -1, r = 1001;
    int half_base;
    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        if (ask(mid, side))
        {
            half_base = mid;
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    base = 2 * half_base;
    l = -1, r = 1001;
    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        if (ask(0, mid))
        {
            l = mid;
            height = mid;
        }
        else
        {
            r = mid;
        }
    }
    int areaT = ((height - side) * base) / 2;
    int areaS = side * side;
    cout << "! " << areaT + areaS << endl;
}