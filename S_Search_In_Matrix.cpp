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
    int n,m; cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    int x; cin >> x;
    bool ispresent = false;
     for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(arr[i][j]==x){
                ispresent = true;
                //cout << "will take number" << nl;
                //return;
            }
        }
    }
    if(ispresent)
    cout << "will not take number" << nl;
    else
    cout << "will take number" << nl;
    

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}