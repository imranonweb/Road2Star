#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define setpr(n) cout << fixed << setprecision(n)
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / gcd((a), (b)) * (b))
#define ceilDiv(a, b) ((a + (b) - 1) / (b))
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double EPS = 1e-9;

void solve() {
  ll n , m , k; cin >> n >> m >> k;
  vll v1(n); vll v2(m);
  for(ll i = 0; i<n; i++) cin >> v1[i];  
  for(ll i = 0; i<m;i++) cin >> v2[i];
  string s; cin >> s;
  ll sz = max(n,m);
  vll v3;
  for(ll x : v1) v3.push_back(x);
  for(ll y : v2) v3.push_back(y);
  ll ans = 0;
  for(ll i = 0; i<v3.size();i++)
  {
    for(ll j = 0; j<k; j++)
    {
        if(s[k] == 'L')
        {
            if(v3[i] == v1[i] && v3[i] == v2[i])
            n--;
            ans = max(n, 0LL);
        }
        else if(s[k] == 'R')
        {
            if(v3[i] == v1[i] && v3[i] == v2[i])
            n++;
            ans = max(n, 0LL);
        }
    }
  }
cout << ans << nl;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
