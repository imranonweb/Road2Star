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
ll solve(ll n) {
    if(n==1)
    return 1;
    else 
    return n * solve(n-1);
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   ll n; cin >> n;
    ll fact = solve(n);
    cout << fact << nl;
    return 0;
}