void shellsort(int a[], int n) {
    int i, j, dk;
    for (dk = n / 2; dk >= 1; dk--) {
        for (i = dk + 1; i <= n; i++) {
            if (a[i] < a[i - dk]) {
                a[0] = a[i];
            }
            for (j = i - dk; j > 0 && a[j] > a[0]; j -= dk) {
                a[j + dk] = a[j];
            }
            a[j + dk] = a[0];
        }
    }
}

int main() {
    return 0;
}