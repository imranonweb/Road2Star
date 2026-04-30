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
bool iseven (ll a){
    if(a%2==0)
    return true;
    else return false;
}
void solve() {
     ll n; cin >> n;
     vll arr(n);
     vll arr1(n/2);
     for(ll i = 0; i<n;i++){
        cin >> arr[i];
     }


  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    return 0;
}