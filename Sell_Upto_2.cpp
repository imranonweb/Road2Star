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
    int N;
    cin >> N;
    vector<ll> A(N + 1);
    for (int i = 1; i <= N; ++i) cin >> A[i];

    const ll NEG = -(1LL << 60);
    vector<vector<ll>> dp(N + 1, vector<ll>(N + 1, NEG));
    dp[0][0] = 0;

    for (int i = 1; i <= N; ++i) {
        for (int s_prev = 0; s_prev <= i - 1; ++s_prev) {
            if (dp[i - 1][s_prev] == NEG) continue;
            int stock = s_prev + 1;
            for (int k = 0; k <= min(2, stock); ++k) {
                int s = stock - k;
                dp[i][s] = max(dp[i][s], dp[i - 1][s_prev] + k * A[i]);
            }
        }
    }

    ll ans = 0;
    for (int s = 0; s <= N; ++s) ans = max(ans, dp[N][s]);
    cout << ans << nl;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
