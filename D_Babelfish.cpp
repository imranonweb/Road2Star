#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;


void solve() {
  string s;
  map<string,string> dic;
  while(getline(cin,s))  {
    if(s.empty()) break;
    string w1 , w2;
    stringstream ss(s);
    ss >> w1 >> w2;
    dic[w2] = w1;
  }
  string w; 
  while(cin >> w)
  {
    if(dic.count(w))
    cout << dic[w] << '\n';
    else 
    cout << "eh" << '\n';
  }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
