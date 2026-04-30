#include <stdio.h>
#include <string.h>

void solve() {
    char s[10001], a[10001];
    scanf("%s", s);
    strcpy(a, s);
    int n = strlen(s);
    char temp = s[0];
    s[0] = s[n - 1];
    s[n - 1] = temp;
    if (strcmp(s, a) == 0)
        printf("Yes\n");
    else
        printf("No\n");
}

int main() {
    solve();
    return 0;
}
