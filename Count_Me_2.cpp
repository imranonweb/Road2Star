#include <stdio.h>
#include <string.h>

void solve() {
    char s[1001];
    scanf("%s", s);
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u') {
            count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    solve();
    return 0;
}
