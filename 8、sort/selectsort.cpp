void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectsort(int a[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int min = i;
        for (int j = i + 1; j < length; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(a[i], a[min]);
        }
    }
}

int main() {
    return 0;
}