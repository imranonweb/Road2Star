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
ll sum(ll x)
{
    ll sum1 = 0;
    while (x != 0)
    {
        sum1 += x % 10;
        x /= 10;
    }
    return sum1;
}
void solve() {
    ll n , q;
    cin >> n >> q;
    vll v(n);
    set<ll>st;
    for(ll i = 0; i<n;i++)
    {
        cin >> v[i];
        if(v[i]>=10)
        st.insert(i);
    } 
    while(q--)
    {
        ll w; cin >> w;
        if(w == 1)
        {
            ll l , r; cin >> l >> r;
            l--; r--;
            auto it = st.lower_bound(l);
            while(it != st.end() && *it <=r)
            {
                ll idx = *it;
                ll val = sum(v[idx]);
                v[idx] = val;

                if(val < 10)
                {
                   it = st.erase(it);
                }
                else
                ++it;
            }
        }
        else
        {
            ll x; cin >> x;
            x--;
            cout << v[x] << nl;
        }

    }
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
