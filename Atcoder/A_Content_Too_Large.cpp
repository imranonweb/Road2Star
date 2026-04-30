#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
#define setpr(n) cout << fixed << setprecision(n)
#define vll vector<long long> 
#define all(x) x.begin(), x.end()  
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
void solve() {
    int n , m; cin >> n >> m;
    int arr[n];
    for(int i = 0 ; i<n;i++)
    {
        cin >> arr[i];
    }
    int p = 0;
    for(int i = 0;i<n;i++)
    {
        p = p + arr[i];
    }
    if(p <=m)
    yes;
    else
    no;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}