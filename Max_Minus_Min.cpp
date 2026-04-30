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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    const ll LIMIT = 200000; 

    vector<pair<ll, int>> vals; 
    vals.reserve(n * 20);

    for (ll i = 0; i < n; i++) {
        ll v = a[i];
        while (v <= LIMIT) {
            vals.emplace_back(v, i);
            v *= 2;
        }
    }

    sort(all(vals));

    vi freq(n, 0);
    ll cov = 0;
    ll left = 0;
    ll ans = LLONG_MAX;

    for (ll right = 0; right < (ll)vals.size(); right++) {
        ll idx = vals[right].second;

        if (freq[idx] == 0) cov++;
        freq[idx]++;

        while (cov == n) {
            ans = min(ans, vals[right].first - vals[left].first);

            ll lidx = vals[left].second;
            freq[lidx]--;
            if (freq[lidx] == 0) cov--;
            left++;
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