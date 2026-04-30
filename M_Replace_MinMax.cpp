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
    vll arr(n);
    ll minn = MAX;
    ll maxx = MIN;
    for(ll i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(ll i = 0;i<n;i++){
        if(arr[i]>maxx){
            maxx = arr[i];
        }
        if(arr[i]<minn){
            minn = arr[i];
        }
        //swap(minn,maxx);
    }
    for(ll i = 0;i < n; i++){
        if(arr[i]==minn)
        arr[i]=maxx;
        else if(arr[i]==maxx)
        arr[i]=minn;
    }
    for(ll i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    //cout << maxx << " " << minn << nl;
    //swap(minn,maxx);
    //cout << minn << " " << maxx << nl;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}