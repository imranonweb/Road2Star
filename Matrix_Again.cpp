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
    ll n , m;
    cin >> n >> m;
    ll arr[n][m];
    for(ll i = 0;i<n;i++){
        for(ll j = 0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(ll i = 0;i<n;i++){
        for(ll j = 0;j<m;j++){
            if(i==n-1){
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << nl;
    for(ll i = 0;i<n;i++){
        for(ll j = 0;j<m;j++){
            if(j==m-1){
                cout << arr[i][j] << " ";
            }
        }
    }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}