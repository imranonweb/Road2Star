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
    ll a , b;
    cin >> a >> b;
    vll arr(a+1);
    for(ll i = 1; i<=a; i++){
        cin >> arr[i];
    }
    vll fre(b+1, 0);
    for(ll i = 1;i<=a;i++){
        ll val = arr[i];
        fre[val]++;
    }
    for(int i = 1; i<=b; i++){
        cout << fre[i] << nl;
    }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}