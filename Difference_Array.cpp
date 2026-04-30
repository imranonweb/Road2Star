#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

#define ll long long

void solve() {
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    ll cop[n];
    for(ll i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        cop[i] = arr[i];
    }
    for(ll i = 0; i < n - 1; i++) {
        for(ll j = i + 1; j < n; j++) {
            if(cop[i] > cop[j]) {
                ll temp = cop[i];
                cop[i] = cop[j];
                cop[j] = temp;
            }
        }
    }
    ll pr[n];
    for(ll i = 0; i < n; i++) {
        pr[i] = llabs(arr[i] - cop[i]);
    }
    for(ll i = 0; i < n; i++) {
        printf("%lld ", pr[i]);
    }
    printf("\n");
}

int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
    return 0;
}
