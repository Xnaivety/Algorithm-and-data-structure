void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void headadjust(int a[], int i, int length) {
    a[0] = a[i];
    for (int j = 2 * i; j <= length; j *= 2) {
        if (j < length && a[j] < a[j + 1]) {
            j++;
        }
        if (a[0] < a[j]) {
            a[i] = a[j];
            i = j;
        } else {
            break;
        }
    }
    a[i] = a[0];
}

void build_max_heap(int a[], int length) {
    for (int i = length / 2; i > 0; i++) {
        headadjust(a, i, length);
    }
}

void heapsort(int a[], int length) {
    build_max_heap(a, length);
    for (int k = length; k > 1; k--) {
        swap(a[1], a[length]);
        headadjust(a, 1, length - 1);
    }
}

int main() {
    return 0;
}