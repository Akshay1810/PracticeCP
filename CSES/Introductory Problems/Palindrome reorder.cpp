#include <bits/stdc++.h>
typedef long long ll;
#define F first
#define S second
#define pb push_back
#define pi pair<int, int>
#define vi vector<int>
#define mp make_pair
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    string s;
    cin >> s;
    int letters[26];
    fill(letters, letters + 26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        letters[s[i] - 65]++;
    }
    int cnt = 0, strvalue = 0, pos = 0;
    for (int i = 0; i < 26; i++)
    {
        if (letters[i] % 2 == 1)
        {
            cnt++;
            strvalue = letters[i];
            pos = i;
        }
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        vector<char> v;
        stack<char> st;
        for (int i = 0; i < 26;)
        {
            while (letters[i] % 2 == 0 && letters[i] != 0)
            {
                char a = i + 65;
                v.push_back(a);
                st.push(a);
                letters[i] -= 2;
            }
            i++;
        }
        int si = v.size();
        for (int i = 0; i < strvalue; i++)
        {
            char a = pos + 65;
            v.push_back(a);
        }
        for (int i = 0; i < si; i++)
        {
            char a = st.top();
            st.pop();
            v.push_back(a);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
    }
}