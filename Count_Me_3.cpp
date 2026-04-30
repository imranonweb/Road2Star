#include <stdio.h>
#include <string.h>

void solve() {
    char s[1001];
    scanf("%s", s);
    int smallcount = 0, capcount = 0, digcount = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            smallcount++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            capcount++;
        else if (s[i] >= '0' && s[i] <= '9')
            digcount++;
    }
    printf("%d %d %d\n", capcount, smallcount, digcount);
}

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        solve();
    }
    return 0;
}
