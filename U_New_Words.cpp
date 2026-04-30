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
  int fre[26]={0};

   for(char c : s){
    c = tolower(c);
    if(c == 'e' || c == 'y' || c == 'g' || c == 'p' || c == 't'){
      fre[(c - 'a')]++;
    }
   }
   string tar = "egypt";
    int words = INT_MAX;
    for(char c : tar) {
        words = min(words, fre[c - 'a']);
    }
    cout << words << nl;

  }

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}