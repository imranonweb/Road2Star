#include <stdio.h>

int count_before_one(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 1) {
            count++;
        } else if (arr[i] == 1) {
            break;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int res = count_before_one(arr, n);
    printf("%d\n", res);
    return 0;
}
