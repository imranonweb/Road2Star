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
     string a , b;
     cin >> a >> b;
     int len1 = a.size();
     int len2 = b.size();
     int n = min(len1,len2);
     for(int i = 0;i<n;i++){ 
        cout << a[i] << b[i];
     }
     if(len1 > len2){
      for(int i = len2; i<len1;i++){
         cout << a[i];
      }
     }
     else
     {
      for(int i = len1; i<len2;i++){
         cout << b[i];
      }
     }
     
     cout << nl;

     
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    return 0;
}