#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n, q;
  string s;
  cin >> n >> q >> s;
  while(q--) {
    string cmd;
    cin >> cmd;
    if(cmd == "pop_back") {
      s.pop_back();
    }
    else if(cmd == "front") {
      cout << s.front() << nl;
    }
    else if(cmd == "back") {
      cout << s.back() << nl;
    }
    else if(cmd == "sort") {
      int l, r;
      cin >> l >> r;
      sort(s.begin() + l - 1, s.begin() + r);
    }
    else if(cmd == "reverse") {
      int l, r;
      cin >> l >> r;
      reverse(s.begin() + l - 1, s.begin() + r);
    }
    else if(cmd == "print") {
      int pos;
      cin >> pos;
      cout << s[pos - 1] << nl;
    }
    else if(cmd == "substr") {
      int l, r;
      cin >> l >> r;
      cout << s.substr(l - 1, r - l + 1) << nl;
    }
    else if(cmd == "push_back") {
      char x;
      cin >> x;
      s.push_back(x);
    }
  }
  return 0;
}