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
  string s;
  cin >> s;
  if(s.size()==1)
  {
    if(s.front()=='b' || s.front()=='B')
    {
        cout << "" << nl;
        return;
    }
    
  }
  string ss = "";
    for(ll i = 0;i<s.size();i++)
    {
        if(s[i]=='b')
        {
            for(ll j = i-1; j>=0;j--)
            {
                if(islower(s[j]))
                {
                    s.erase(s.begin()+j);
                    break;
                }
            }
        }
        else if(s[i]=='B')
        {
            for(ll j = i-1; j>=0;j--)
            {
                if(isupper(s[j]))
                {
                    s.erase(s.begin()+j);
                    break;
                }
            }
        }
    }
    cout << s << nl;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
