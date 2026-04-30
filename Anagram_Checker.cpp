#include <stdio.h>
#include <string.h>

void Sort(char arr[], int n) {
    for (int i = 0; i <n - 1; i++) {
        for (int j = 0; j<n-1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char a[10001], b[10001];
    scanf("%s%s", a,b);
    int len1 =strlen(a);
    int len2 = strlen(b);
    if (len1 != len2) {
        printf("No\n");
        return 0;
    }
    Sort(a,len1);
    Sort(b,len2);
    if (strcmp(a,b) == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
