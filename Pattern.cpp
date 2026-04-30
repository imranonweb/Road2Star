#include <stdio.h>
#include <math.h>
#include <limits.h>

#define MOD 1000000007
#define MAX INT_MAX
#define MIN INT_MIN

void solve() {
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int val = 1;

    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= space; k++) {
            printf(" ");
        }
        for (int j = 1; j <= val; j++) {
            if (row % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
        space--;
        val += 2;
    }

    int space1 = 1;
    int val2 = 2 * n - 3;
    for (int row = n + 1; row <= 2 * n - 1; row++) {
        for (int k = 1; k <= space1; k++) {
            printf(" ");
        }
        for (int j = val2; j >= 1; j--) {
            if (row % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
        space1++;
        val2 -= 2;
    }
}

int main() {
    solve();
    return 0;
}
