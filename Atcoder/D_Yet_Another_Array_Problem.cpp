#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define gcd(a, b) __gcd((a), (b))
const ll INF = 1e18;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    for (ll x = 2; x <= 200; x++) {
        bool ok = false;
        for (ll i : a) {
            if (gcd(i, x) == 1) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << x << nl;
            return;
        }
    }
    cout << -1 << nl;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
