#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    string s;
    cin >> s;
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && st.top() != ch && ch == '1') {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    if (st.empty()) yes;
    else no;
}

int main() {
    FAST_IO
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
