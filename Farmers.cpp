#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void solve() {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    if (m2 == 0) {
        printf("0\n");
        return;
    }
    float rem = (m1*d)/(m1+m2);
    int days = (ceil(d -rem));
    printf("%d\n", days);
}

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        solve();
    }
    return 0;
}
