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
void solve() {
    ll n; cin >> n;
    vll A(n);
    for(ll &i : A)
    cin >> i;
    ll m; cin >> m;
    vll B(m);
    for(ll &i : B)
    cin >> i;
    ll x ; cin >> x;
   A.insert(A.begin()+x,B.begin(),B.end());
   for( ll i : A)
   cout << i << " ";
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}