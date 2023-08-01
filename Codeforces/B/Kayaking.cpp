// learned next permutation
/**0 in a permutation means that this person goes in single kayak
1 means they will go in a tandem kayak
We make permutations of length 2 * n consisting of exactly 2 0's and the rest are all 1's
For example, for n = 2, we start with the permutation 0011 and process all permutations
For each permutation we compute the total instability of the journey
We get the minimum instability out of all permutations
**/
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
    int n;
    cin >> n;

    vector<int> w(2 * n);

    for (int &e : w)
        cin >> e;

    sort(w.begin(), w.end());

    string s(w.size(), '1');

    int instability, ans = INT_MAX;

    s[0] = s[1] = '0';

    do
    {

        instability = 0;

        for (int i = 0; i < w.size(); i++)
        {
            if (s[i] == '1')
            {
                int j = i + 1;
                while (j < w.size() && s[j] != '1')
                    j++;
                instability += w[j] - w[i];
                i = j;
            }
        }

        ans = min(ans, instability);

    } while (next_permutation(s.begin(), s.end()));

    cout << ans;
}