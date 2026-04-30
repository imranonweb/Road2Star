#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    if (n > 0) {
        for (long long i = 1; i <= n; i++) {
            printf("%lld ", i);
        }
    } else if (n <= 0) {
        for (long long i = n; i <= 0; i++) {
            printf("%lld ", i);
        }
    }
}

int main() {
    solve();
    return 0;
}
