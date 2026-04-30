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
ll solve(ll arr[],ll n,ll i,ll sum) {
    if(i==n){
        return sum ;
    }
    //ll sum = 0;
    //sum += arr[i];
    return solve(arr,n,i+1,sum + arr[i]);

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n ;ll i = 0; ll sum = 0;
    ll arr[n];
    for(ll i = 0;i<n;i++){
        cin >> arr[i];
    }
    ll sum1 = solve(arr,n,i,sum);
    cout << sum1 << nl;

    return 0;
}