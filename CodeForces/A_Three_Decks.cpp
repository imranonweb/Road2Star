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
     ll a , b ,c; cin >> a >> b >> c;
     if((a+b+c)%3 !=0){
        no; return;
     }
     if((a+b+c)%3==0){
        ll x = (a+b+c)/3;
        if((x-b)<0)
        no;
        else
        yes;
      }
  }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    /* solve
    solve
    solve */
    return 0;
}