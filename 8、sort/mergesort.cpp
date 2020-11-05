#include<malloc.h>

int n;
int *b = (int *) malloc(sizeof(int) * (n + 1));

void merge(int a[], int low, int mid, int high) {
    for (int k = low; k <= high; k++) {
        b[k] = a[k];
    }
    int i, j, k;
    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
        if (b[i] <= b[j]) {
            a[k] = b[i++];
        } else {
            a[k] = b[j++];
        }
    }
    while (i <= mid) {
        a[k++] = a[i++];
    }
    while (j <= high) {
        a[k++] = a[j++];
    }
}

void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    return 0;
}