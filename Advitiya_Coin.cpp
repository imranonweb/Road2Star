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
    ll n, k;
    cin >> n >> k;

    vll v(n);
    for (auto &x : v) cin >> x;

    ll base = v[0];
    ll ans = 0;

    for (ll i = 1; i < n; i++) {
        if ((v[i] > base && v[i] > v[i - 1]) ||
            (v[i] < base && v[i] < v[i - 1])) {
            base = v[i];
        }

        if (llabs(v[i] - base) > k) {
            ans++;
            base = v[i];
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
