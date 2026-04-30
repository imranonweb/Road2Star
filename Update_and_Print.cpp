#include <stdio.h>
#include <limits.h>
#define ll long long
#define nl "\n"
#define yes printf("YES\n")
#define no printf("NO\n")
#define setpr(n) // Not applicable in C
#define vll long long*
#define all(x) // Not applicable in C
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b)) / gcd(a, b)
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);
    for (int i = n - 1; i >= 0; i--) {
        if (i == x) {
            arr[i] = v;
        }
        printf("%d ", arr[i]);
    }
}

int main() {
    solve();
    return 0;
}