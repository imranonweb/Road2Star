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
    int n,m; cin >> n >>m;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    bool flag1 = true;
    bool flag2 = true;
    bool flag3 = true;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i==j){
                if(arr[i][j] != 1){
                     flag1 = false;
                     break;
                }
            }
        }
        for(int j = 0;j<m;j++){
            if(i+j==m-1){
                if(arr[i][j] != 1){
                     flag2 = false;
                     break;
                }
            }
        }
        for(int j = 0; j < m; j++){
            if((i != j) && (i + j != m - 1)){
                if(arr[i][j]!=0)
                 flag3 = false;
            }
        }
    }
    if(flag1 && flag2 && flag3)
    yes;
    else
    no;

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}