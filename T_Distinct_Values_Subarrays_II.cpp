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
vector<int> a(n);
for (auto &x : a) cin >> x;

map<int, int> freq;
ll ans = 0;
int l = 0;
for (int r = 0; r < n; ++r) {
    freq[a[r]]++;
    while ((int)freq.size() > k) {
        freq[a[l]]--;
        if (freq[a[l]] == 0) freq.erase(a[l]);
        l++;
    }
    ans += r - l + 1;
}
cout << ans << nl;
}


int main() {
    FAST_IO
    solve();
    return 0;
}
