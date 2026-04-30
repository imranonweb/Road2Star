#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using ll = long long;

void file()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}

void solve()
{   int n; cin >> n;
    vector<ll> v(n);
    for(auto &i : v)
    cin >> i;
    reverse(v.begin(),v.end());
    for(const auto i : v)
    {
        cout << i << " ";
    }



}

int main() {
    //file();
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
