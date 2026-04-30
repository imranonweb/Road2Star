#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        // Remove characters at even indices
        if(i%2==0)
            s.erase(s.begin() + i);}
    cout << "Modified string: " << s << endl;
    cout << s << endl;
}