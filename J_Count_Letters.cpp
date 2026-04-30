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
    //sort(all(s));
    vector <ll> fre(26,0);
    for(ll i = 0; i < s.size(); i++){
        ll val = s[i] - 'a';
        fre[val]++;
    }
    for(ll i = 0; i<26;i++){
        if(fre[i]>0)
        cout << char('a'+i) << " : " << fre[i] << nl;
    }
  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}