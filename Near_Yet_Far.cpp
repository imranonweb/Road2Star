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
    int n, k;
    cin >> n >> k;
    
    vll a(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    ll ans = 0;
    
    for(int start = 1; start <= k; start++) {
        vector<pair<ll, ll>> dp(n + 1, {INF, -INF});
        dp[start] = {a[start], a[start]};
        
        for(int i = start; i <= n; i++) {
            if(dp[i].first == INF) continue;
            ll mn = dp[i].first;
            ll mx = dp[i].second;
            
            if(i >= n - k + 1) {
                ans = max(ans, mx - mn);
            }
            for(int j = i + 2; j <= min(n, i + k); j++) {
                ll nmin = min(mn, a[j]);
                ll nmax = max(mx, a[j]);
                
                if(dp[j].first == INF) {
                    dp[j] = {nmin, nmax};
                } else {
                    dp[j].first = min(dp[j].first, nmin);
                    dp[j].second = max(dp[j].second, nmax);
                }
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