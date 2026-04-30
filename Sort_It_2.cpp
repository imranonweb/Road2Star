#include <bits/stdc++.h>
using namespace std;

int* sort_it(int N) {
    int* arr = new int[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N, greater<int>());
    return arr;
}

int main() {
    int n;
    cin >> n;
    int* arr = sort_it(n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}
