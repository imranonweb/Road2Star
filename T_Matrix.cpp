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
    int arr[n][n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    int first_sum = 0;
    int sec_sum = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(i==j){
                first_sum += arr[i][j];
            }
        }
    }
     for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(i+j==n-1){
                sec_sum += arr[i][j];
            }
        }
    }
    int sum = abs(first_sum - sec_sum);
    cout << sum << nl;
    

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}