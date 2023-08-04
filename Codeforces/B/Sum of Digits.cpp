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
using namespace std;
// >>>>>>>>>>>>>>>>>>>>>>comparator funtion for sorting maps according to value(not key)<<<<<<<<<<<<<<<<<<<<<<<<
bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first; // ascending order
    return a.second > b.second;   // descending order
}
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
    string n;
    cin >> n;
    int cnt = 0;
    while (n.size() != 1)
    {
        int sum = 0;
        for (char x : n)
            sum += x - '0';
        n = to_string(sum);
        cnt++;
    }
    cout << cnt << endl;
}