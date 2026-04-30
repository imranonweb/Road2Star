#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define setpr(n) cout << fixed << setprecision(n)
#define vll vector<long long> 
#define vi vector<int>
#define all(x) x.begin(), x.end()  
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
void solve() {
    int n;
    cin >> n;
     vi arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}