#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define setpr(n) cout << fixed << setprecision(n)
#define vll vector<long long> 
#define all(x) x.begin(), x.end()  
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
const ll N = 1e5+5;
ll arr[N]; ll prefix[N];
void solve() {
    ll n , q;
    cin >> n >> q;
    for(ll i=1;i <=n;i++){
        cin >> arr[i];
        prefix[i] = prefix[i-1]+arr[i];
    }
    while(q--){
        ll l , r;
        cin >> l >> r;
        cout << prefix[r]-prefix[l-1] << nl;
    }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}