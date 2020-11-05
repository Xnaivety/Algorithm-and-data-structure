int partition(int a[], int low, int high) {
    int pivot = a[low];
    while (low < high) {
        while (low < high && a[high] >= a[low]) {
            high--;
        }
        a[low] = a[high];
        while (low < high && a[low] <= a[high]) {
            low++;
        }
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pivotpos = partition(a, low, high);
        quicksort(a, low, pivotpos - 1);
        quicksort(a, pivotpos + 1, high);
    }
}


int main() {
    return 0;
}