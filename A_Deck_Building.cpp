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
  vll v1(n); 
  for(auto &x : v1) cin >> x;
  vll v2(n);
  for(auto &x : v2) cin >> x;

  vector<ll> com;

  //vector<pair<ll,ll>> vp;
//   for(ll i = 0; i<n;i++)
//   {
//     vp.push_back({v1[i],v2[i]});
//   } 
   ll sum = 0;
// //   bool cmp(pair<ll,ll>&v1,pair<ll,ll>&v2)
// //   {
// //     return v1.first < v2.first;
// //   }
//   sort(vp.begin(),vp.end(),[](auto &v1,auto &v2){
//     return v1.first < v2.first;
//   });
//   for(ll i = 0; i<min(n,4LL);i++)
//   {
//     sum += (vp[i].first + vp[i].second);
//   } 

for(ll i = 0; i<n;i++)
{
    com.push_back(v1[i]+v2[i]);
}
sort(all(com));
for(ll i = 0;i<4;i++)
{
    sum += com[i];
}
  cout << sum << nl;
}

int main() {
    FAST_IO
    solve();
    return 0;
}
