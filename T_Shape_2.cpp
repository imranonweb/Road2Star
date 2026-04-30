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
    int n; cin >> n;
    int star = 1;
    int space = n - 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=space;j++){
            cout << " ";}
            for(int k = 1; k<=star ; k++){
                cout << "*";
            }
            cout << nl;
            
        star +=2;
        space--;
    }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}