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
    if(n==1)
    yes;
    vector<ll> arr(n);
    for(ll i = 0; i<n;i++){
        cin >> arr[i];
    }
    vector<ll> arr1(n);
    for(ll i = 0; i < n; i++){
        arr1[i] = arr[n - i - 1];
    }
    /*for(ll i = 0; i<n;i++){
        cout << arr1[i] << " ";
    }*/
    /*for(ll i = n-1;i>=0;i--){
        cout << arr[i] << " ";
    }*/
    bool ispal = true;
    for(ll i = 0; i < n; i++){
        if(arr[i] != arr1[i]){
            ispal = false;
            break;
        }
    }
    if(ispal)
    yes;
    else
    no;
  }

int32_t main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}