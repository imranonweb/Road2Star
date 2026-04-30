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
    ll n, q;
    cin >> n >> q;
    vll v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    
    vll d(n + 1, 0);
    for(ll i = 0; i < q; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        d[a]++;
        d[b + 1]--;
    }
    
    for(ll i = 1; i <= n; i++) {
        d[i] = d[i - 1] + d[i];
    }
    
    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());
    
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += v[i] * d[i];
    }
    cout << sum << nl;
}

int main() {
    FAST_IO
    solve();
    return 0;
}
