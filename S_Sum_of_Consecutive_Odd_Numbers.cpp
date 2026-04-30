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
     int a , b;
     cin >> a >> b;
     int sum = 0;
     if(a==b)
     cout << 0 << nl;
     if(a<b){
     for(int i = a+1;i<b;i++){
        if(i%2==1)
        sum = sum + i;
     }
    }
    if(b<a){
    for(int i = b+1;i<a;i++){
        if(i%2==1)
        sum = sum + i;
    }}
     cout << sum << nl;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    return 0;
}