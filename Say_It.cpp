#include <stdio.h>
void solve() {
    int n;
    scanf("%d",&n);
    int j = 1;
    for (int i = 0; i < n; i++) {
        printf("%d. I Want More Assignments\n", j);
        j++;
    }
}

int main() {
    solve();
    return 0;
}
