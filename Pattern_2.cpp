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
     ll n;
     cin >> n;
    //  if(n==1){
    //     cout << n << nl;
    //     return;
    //  }
     ll space = n-1;
     //ll val = 1;
     for(ll i = 1; i<=n;i++){
        for(ll i = 1; i<=space;i++){
            cout << " ";
        }
        for(ll j = i; j >= 1; j--){
    cout << j;}
        cout << nl;
        space--;
    //val++;
     }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}