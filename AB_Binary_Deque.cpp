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
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int total = 0;
    for (int x : a) total += x;

    if (total < s) {
        cout << -1 << nl;
        return;
    }
    if (total == s) {
        cout << 0 << nl;
        return;
    }

    int l = 0, curr = 0, best = -1;

    for (int r = 0; r < n; r++) {
        curr += a[r];

        while (curr > s) {
            curr -= a[l];
            l++;
        }

        if (curr == s) {
            best = max(best, r - l + 1);
        }
    }

    if (best == -1) cout << -1 << nl;
    else cout << n - best << nl;
}



int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
