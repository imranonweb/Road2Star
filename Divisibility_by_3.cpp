#include <stdio.h>
#include <string.h>

void solve() {
    int n;
    scanf("%d", &n);
    char s[100005];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    if (sum % 3 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}

int main() {
    solve();
    return 0;
}
