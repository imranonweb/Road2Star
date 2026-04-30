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
    int star1 = 1;
    int star2= 2*n - 1;
    int space1 = n-1;
    int space2 = 1;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j <= space1; j++){
            cout << " ";
        }
        for(int k = 1; k<=star1;k++){
            cout << "*";
        }
        cout << nl;
        star1+=2;
        space1--;
    }
    for(int i = 1; i<=n;i++){
        for(int j = 1; j < space2; j++){
            cout << " ";
        }
        for(int k = star2; k>=1;k--){
            cout << "*";
        }
        cout << nl;
        star2-=2;
        space2++;
    }

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}