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
     string s;
     cin >> s;
     int sum1 = 0;
     int sum2 = 0;
     for(int i = 0;i<3;i++){
        sum1 += s[i]-'0';
     }
     for(int i = 3;i<s.size();i++){
        sum2 += s[i]-'0';
     }
     if (sum1 == sum2)
     yes;
     else
     no;
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;  
    while (tc--)
    solve();
    return 0;
}