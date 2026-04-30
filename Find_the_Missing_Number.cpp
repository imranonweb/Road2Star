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
     ll m , a , b , c;
     cin >> m >> a >> b >> c;
     if (m==0){
        cout << 0 << nl;
        return;
     }
     ll mul = a*b*c;
     if(m%mul==0){
        cout << (m/mul) << nl;
     }
     else
     cout << -1 << nl;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    return 0;
}