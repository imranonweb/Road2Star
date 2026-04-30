#include <stdio.h>
#include <string.h>
#define MAX 100005
void solve() {
    char s[MAX];
    int fr[26] = {0};
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        fr[s[i] - 'a']++;
    }

    for (int i = 0;i <26; i++) {
        if (fr[i] < 3) {
            printf("%c\n", 'a' + i);
            break;
        }
    }
}

int main() {
    solve();
    return 0;
}
