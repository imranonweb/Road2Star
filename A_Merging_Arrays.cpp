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
  ll a , b; cin >> a >> b;
  int k = 0;
  ll arr1[a+1];
  ll arr2[b+1];
  vector<ll> v;  
  ll i = 0; ll j = 0;
  for(ll i = 0; i<a;i++) cin >> arr1[i];
  arr1[a] = INF;
  for(ll i = 0; i < b ; i++) cin >> arr2[i];
  arr2[b] = INF;
  while (i < a || j < b) {
    if (arr1[i] < arr2[j]) {
        v.push_back(arr1[i]);
        i++;
    } else {
        v.push_back(arr2[j]);
        j++;
    }
}
  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}

int main() {
    FAST_IO
    solve();
    return 0;
}
