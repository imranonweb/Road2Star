#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 1;i<=a;i++){
        if (i%5==0)
            cout << i << " Yes" << endl;
        else
            cout << i << " No" << endl;
    }
return 0;
}

