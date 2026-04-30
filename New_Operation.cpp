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
  ll n; cin >> n;
  vll v(n);
  for(auto &x : v) cin >> x;
  vll v1;
  ll sum1 = v[0]; ll sum2 = v[0];
  ll ans1 = LLONG_MAX; ll ans2 = LLONG_MIN;

  for(ll i = 1; i<n;i++)
  {
    sum1 += 2*v[i];
    ans1 = min(sum1,ans1);
  }  
  v1.push_back(ans1);
  for(ll i = 1; i<n;i++)
  {
    sum2 += 2*v[i];
    ans2 = max(sum2,ans2);
  } 
  v1.push_back(ans2);
  cout << v1[0] << " " << v1[1] << nl;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
