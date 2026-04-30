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
    vll arr(n+1);
    for(int i = 1; i<= n; i++){
        cin >> arr[i];
    }
    ll sum1=MAX;
    ll sum=0;
    for(int i = 1 ; i<=n;i++){
        //sum = 0;
        for(int j = i+1; j <= n;j++){
            sum = arr[i]+arr[j]+j-i;
            if(sum<sum1)
        sum1 = sum;
        //cout << sum << nl;
        }
        //cout << sum << nl;

    }
    cout << sum1 << nl;

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int tc;
   cin >> tc;
   while(tc--)
    solve();
    return 0;
}