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
const ll MOD = 998244353;
const ll INF = 1e18;
const double EPS = 1e-9;

ll power(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll factorial(int n) {
    ll res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort to find consecutive sequences
    sort(all(a));
    
    // Find maximum length of consecutive sequence (elements differing by 1)
    int maxLen = 1;
    int curLen = 1;
    
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 1) {
            curLen++;
            maxLen = max(maxLen, curLen);
        } else {
            curLen = 1;
        }
    }
    
    int numSeq = 0;
    curLen = 1;
    
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 1) {
            curLen++;
        } else {
            if (curLen == maxLen) numSeq++;
            curLen = 1;
        }
    }
    if (curLen == maxLen) numSeq++;
    
    ll waysPerSeq = power(2, maxLen - 1, MOD);
    ll remainingFact = factorial(n - maxLen);
    
    ll answer = (1LL * numSeq * waysPerSeq) % MOD;
    answer = (answer * remainingFact) % MOD;
    
    cout << answer << nl;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}