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
     ll n , k; cin >> n >> k;
     vll arr(n);
     for(ll &i : arr)
     cin >> i;
    //arr[0]--;
     //ll dif = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());
     //if(dif <=k)
     if(n%2==1)
     cout << "Tom" << nl;
     else
     cout << "Jerry" << nl;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    return 0;
}