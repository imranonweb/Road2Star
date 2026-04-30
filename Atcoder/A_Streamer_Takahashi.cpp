#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define setpr(n) cout << fixed << setprecision(n)
#define vll vector<long long> 
#define all(x) x.begin(), x.end()  
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
void solve() {
    ll n , l , r;
    cin >> n >> l >> r;
    vector<pair<ll,ll>> pr(n);
    for(ll i = 0; i < n;i++)
    {
        cin >> pr[i].first >> pr[i].second;
    }
    ll cnt = 0;
    for(ll i = 0; i<n;i++)
    {
        if(pr[i].first <= l && pr[i].second >=r)
        cnt++;
    }
    cout << cnt << nl;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}