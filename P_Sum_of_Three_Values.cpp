#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<pii> v(n);  
    
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1; 
    }
    
    sort(all(v));
    
    for (int i = 0; i < n - 2; i++) {
        ll target = (ll)x - v[i].first;
        
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            ll sum = (ll)v[left].first + v[right].first;
            
            if (sum == target) {
                vector<int> positions = {v[i].second, v[left].second, v[right].second};
                sort(all(positions));  
                
                cout << positions[0] << " " << positions[1] << " " << positions[2] << nl;
                return;
            } else if (sum < target) {
                left++;   
            } else {
                right--;  
            }
        }
    }
    
    cout << "IMPOSSIBLE" << nl;
}

int main() {
    FAST_IO
    solve();
    return 0;
}