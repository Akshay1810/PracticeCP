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
    int n, m;
    cin >> n >> m;

    map<string, int> countryV;
    unordered_map<string, string> chefs;
    for (int i = 0; i < n; i++)
    {
        string name, country;
        cin >> name >> country;
        chefs[name] = country;
    }
    map<string, int> votes;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        votes[s]++;
        string cont = chefs[s];
        countryV[cont]++;
    }
    int max = 0;
    string winner;
    for (auto it : votes)
    {
        if (it.second > max)
        {
            winner = it.first;
            max = it.second;
        }
    }
    max = 0;
    string winnerC;
    for (auto it : countryV)
    {
        if (it.second > max)
        {
            winnerC = it.first;
            max = it.second;
        }
    }
    cout << winnerC << endl;
    cout << winner << endl;
}