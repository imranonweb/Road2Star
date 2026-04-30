#include <stdio.h>
#include <limits.h>

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 1; i--) {
        if (i % 2 == 1) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    solve();
    return 0;
}
