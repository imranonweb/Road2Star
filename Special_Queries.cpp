#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

void solve() {
    int q;
    cin >> q;
    queue<string> qq;
    while(q--) {
        int a;
        cin >> a;
        if(a == 0) {
            string s;
            cin >> s;
            qq.push(s);
        } else if(a == 1) {
            if(qq.empty()) {
                cout << "Invalid" << nl;
            } else {
                cout << qq.front() << nl;
                qq.pop();
            }
        }
    }
}

int main() {
    FAST_IO
    solve();
    return 0;
}
