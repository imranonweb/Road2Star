#include<bits/stdc++.h>
using namespace std;
int chartoascii(char c){
    int res = int(c);
    return res;
}
int main(){
    char a; cin >> a;
    int result = chartoascii(a);
    cout << result << '\n';
}