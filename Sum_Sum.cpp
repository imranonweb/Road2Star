#include <stdio.h>
#include <limits.h>

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sumpos = 0, negpos = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negpos += arr[i];
        } else {
            sumpos += arr[i];
        }
    }

    printf("%d %d", sumpos, negpos);
}

int main() {
    solve();
    return 0;
}
