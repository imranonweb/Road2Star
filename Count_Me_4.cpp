#include <stdio.h>
#include <string.h>

void solve() {
    char s[10001];
    scanf("%s", s);
    int fre[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        int idx = s[i] - 'a';
        fre[idx]++;
    }
    for (int i = 0; i < 26; i++) {
        if (fre[i] > 0) {
            printf("%c - %d\n", 'a' + i, fre[i]);
        }
    }
}

int main() {
    solve();
    return 0;
}
