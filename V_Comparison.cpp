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
    int a ; 
    cin >> a;
    char ang;
    cin >> ang;
    int b;
    cin >> b;
    
    if(a>b && ang == '>')
    cout << "Right\n" ;
    else if (a==b && ang == '=')
    cout << "Right\n";
    else if(a<0 && b>0 && ang == '>')
    cout << "Wrong\n";
        else if(a<0 && b>0 && ang == '<')
    cout << "Right\n";    
    else
    cout << "Wrong\n";
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}